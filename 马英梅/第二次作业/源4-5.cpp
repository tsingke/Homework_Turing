#include<iostream>
using namespace std;
int main()
{
	cout << "请输入圆的半径：";
	int r;
	cin >> r;
	cout << "圆的周长是" << 2 * 3.14*r << endl;
	cout << "圆的面积是" << r * r*3.14 << endl;
	return 0;
}