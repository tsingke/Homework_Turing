#include<iostream>
using namespace std;
const double pi = 3.1415926;
int main()
{
	int r;
	cout << "输入圆的半径" << endl;
	cin >> r;
	double S,L;
	cout << "圆的面积为：";
	cout << "S=" << pi * r*r << endl;
	cout << "圆的周长：";
	cout << "L=" << 2 * pi*r << endl;
	system("pause");
	return 0;
}