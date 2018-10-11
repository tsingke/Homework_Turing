/*answer2_5_2.cpp 用C++语言编写一个输入圆半径，输出其面积和周长的程序*/
#include<windows.h>
#include<iostream>
using namespace std;
const double PI = 3.14159;
int main()
{
	double r;
	cout << "请输入圆的半径：";
	cin >> r;
	double S, a;
	a = 2 * PI*r;
	S = PI * r*r;
	cout << "圆的面积为：" << S << endl << "圆的周长为：" << a << endl;



	system("pause");
	return 0;
}