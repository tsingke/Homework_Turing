#include<iostream>
using namespace std;
#define pi 3.1415926
int main()
{
	double r,l,s;
	cout << "输入圆的半径:" << endl;
	cin >>  r;
	l = 2 *pi*r;
	s = pi * r*r;
	cout << "圆的面积为：" << s<<endl;
	cout << "圆的周长为：" << l<<endl;
	getchar();
	system("pause");
	return 0;
}
