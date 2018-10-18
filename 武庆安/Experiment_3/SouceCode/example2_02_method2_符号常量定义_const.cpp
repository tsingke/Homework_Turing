// example2_02_method2：两种符号常量定义方法的区别，方法2：用const

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	int x = 5;

	const int t1 = x + x;      	//行5，用const定义符号常量t1

	const int t2 = t1 - t1;   	//行6，用const定义符号常量t2

	cout << "t1=" << t1 << "  t2=" << t2 << endl;
	system("pause");
	return 0;
}
