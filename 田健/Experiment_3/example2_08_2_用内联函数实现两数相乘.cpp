/*---------------------------------------------------------*
//example2_08_2.cpp:用内联函数实现两数相乘
*---------------------------------------------------------*/
#include <iostream>
#include<Windows.h>
using namespace std;

inline  int Multiply(int x, int y)
{
	return x * y;
}

int main()
{
	int a = Multiply(3 + 4, 2 + 3);

	cout << "a=" << a << endl;
	system("pause");
	return 0;
}


