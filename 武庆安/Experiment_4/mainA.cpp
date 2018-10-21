#include <iostream>
#include <cmath>
#include<float.h>
#include <windows.h>
using namespace std;

void cpnn( int* p);
void calc(int *p);
void sort(int *p);
int main()
{
	int *ptr;
	ptr = new int[20];
	for (int i = 0; i < 20; i++)
	{
		ptr[i] = i - 10;
	}
	cpnn(ptr);
	calc(ptr);
	sort(ptr);
	delete[]ptr;
	system("pause");
	return 0;
}


