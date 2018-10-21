
#include<Windows.h>
#include<iostream>
using namespace std;
const double pi = 3.1415926;
int main()
{
	double r, s, c;
	cout << "请输入圆的半径"<<endl;
	cin >> r;
	s = pi * r*r;
	c = 2 * pi*r;
	cout << "圆的周长是" << c << " 面积是" << s << endl;
	system("pause");
	return 0;
}
