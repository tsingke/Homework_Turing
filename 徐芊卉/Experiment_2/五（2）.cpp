#include<iostream>
using namespace std;
int main()
{
	const double PI = 3.1415926;
	double r, s, c;
	cout << "该圆半径为:";
	cin >> r;
	cout << endl;
	s = PI * r*r;
	cout << "该圆面积为：" << s;
	cout << endl;
	cout << "该圆周长为：";
	c = 2 * PI*r;
	cout << c;
	system("pause");
	return 0;
}