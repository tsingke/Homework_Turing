#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	double r, l, s;
	cout << "输入圆的半径" << endl;
	cin >> r;
	l = 2 * 3.14* r;
	s = 3.14 * r*r;
	cout << "圆的周长为 :" << l << endl << "圆的面积为 :" << s << endl;
	system("pause");
	return 0;
}
