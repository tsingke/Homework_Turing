//answer2_5_2.c
#include <iostream>
using namespace std;
const double PI = 3.1415926;
double S(double r)
{
	double s;
	s = PI * r*r;
	return s;
}
double C(double r)
{
	double c;
	c = 2 * PI*r;
	return c;
}
int main()
{
	double r, s, c;
	cout << "请输入圆的半径:";
	cin >> r;
	s = S(r);
	c = C(r);
	cout << "圆的面积为：" << s << endl << "圆的周长为：" << c << endl;
	return 0;
}
