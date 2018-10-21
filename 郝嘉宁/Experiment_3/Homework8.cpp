#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
double area(int x);
double length(int x);
double pi = 3.1415926;
int main()
{
	int r;
	double l, s;
	cout << "请输入圆的半径r=";
	cin >> r;
	l=length(r);
	s=area(r);
	cout << "圆的周长=" << l << endl<< "圆的面积=" << s << endl;
	system("pause");
	return 0;
}

double length(int x)
{
	double l;
	l = 2 * pi*x;
	return l;
}

double area(int x)
{
	double s;
	s = pi * pow(x, 2);
	return s;
}