#include<iostream>
#include<windows.h>
#define Pi 3.14
using namespace std;
int main()
{
	double S, C;
	int r;
	cout << "请输入圆的半径：" << endl;
	cin >> r;
	S = Pi * r*r;
	C = 2 * Pi*r;
	cout << "圆的面积是：S=" << S << endl;
	cout << "圆的周长是：C=" << C << endl;
	system("pause");
	return 0;
}