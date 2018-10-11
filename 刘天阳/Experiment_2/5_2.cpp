#include<iostream>
using namespace std;
#define pi 3.1415926

double get_area(double r)
{
	double S;
	S = r*r*pi;
	return S;
}

double get_length(double r)
{
	double l;
	l = 2*r*pi;
	return l;
}

int main()
{
	double r;
	cout << "请输入圆的半径：";
	cin >> r;
	cout<<  "面积是" << get_area(r) << endl << "周长是" << get_length(r) << endl;
	system("pause");
	return 0;
}