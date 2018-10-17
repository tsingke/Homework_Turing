// example2_02_method1：两种符号常量定义方法的区别, 方法2：用宏定义

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	int x = 5;

#define  t1  x+x    		//用宏定义定义符号常量t1

#define  t2  t1-t1  		//用宏定义定义符号常量t2		//	t2=5+5-5+5=10
							//#define  t2  (t1)-(t1)	//	t2=0
	cout << "t1=" << t1 << "  t2=" << t2 << endl;
	system("pause");
	return 0;
}
