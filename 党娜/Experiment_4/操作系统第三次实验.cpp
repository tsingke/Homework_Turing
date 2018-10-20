// 操作系统第三次实验.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "操作系统第三次实验.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// The one and only application object

CWinApp theApp;

using namespace std;


static int count=5;
static HANDLE h1;
static HANDLE h2;
LPCRITICAL_SECTION hCriticalSection;
CRITICAL_SECTION Critical;
void func1();
void func2();


int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	int nRetCode = 0;
    DWORD dwThreadID1,dwThreadID2;
	hCriticalSection=&Critical;
	InitializeCriticalSection(hCriticalSection);

	h1=CreateThread((LPSECURITY_ATTRIBUTES)NULL,
		            0,
					(LPTHREAD_START_ROUTINE)func1,//这个是1还是l。。。
					(LPVOID)NULL,
					0,&dwThreadID1);
	if(h1==NULL)printf("Thread1 create Fail!\n");
	else printf("Thread1 create Success!\n");

    h2=CreateThread((LPSECURITY_ATTRIBUTES)NULL,
		            0,
					(LPTHREAD_START_ROUTINE)func2,
					(LPVOID)NULL,
					0,&dwThreadID2);
	if(h2==NULL)printf("Thread2 create Fail!\n");
	else printf("Thread2 create Success!\n");

	Sleep(1000);
	CloseHandle(h1);
	CloseHandle(h2);
	DeleteCriticalSection(hCriticalSection);
	ExitThread(0);
	return nRetCode;
}
void func2()
{
int r2;


EnterCriticalSection(hCriticalSection);
r2=count;
_sleep(100);
r2=r2+1;
count=r2;
printf("count in func2=%d\n",count);
LeaveCriticalSection(hCriticalSection);
}

void func1()
{
int r1;


EnterCriticalSection(hCriticalSection);
r1=count;
_sleep(500);
r1=r1+1;
count=r1;
printf("count in func1=%d\n",count);
LeaveCriticalSection(hCriticalSection);
}
