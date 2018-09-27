//用C++语言编写一个输入圆半径，输出其面积和周长的程序

//代码如下：

#include <iostream>
#include <windows.h>

using namespace std;

#define pi 3.14 

double Area(int r);
double Perimeter(int r);

int main()
{
	int r;
	cout << "请输入圆的半径：";
	cin >> r;
	cout << "圆的面积为：" << Area(r) << endl;
	cout << "圆的周长为：" << Perimeter(r) << endl;
	system("pause");
	return 0;
}

double Area(int r)
{
	return pi * r*r;
}

double Perimeter(int r)
{
	return 2 * pi*r;
}