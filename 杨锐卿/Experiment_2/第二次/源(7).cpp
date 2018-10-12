#include<iostream>
using namespace std;
int main()
{
	int r;
	double s, l;
	cout << "输入圆的半径：";
	cin >> r;
	s = 3.14*r*r;
	l = 2 * 3.14*r;
	cout << "圆的面积为：" << s << endl << "圆的周长为：" << l << endl;
	system("pause");
    return 0;

}