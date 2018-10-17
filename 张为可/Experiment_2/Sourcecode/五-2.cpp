#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
	int r;
	cout << "请输入圆的半径";
	cin >> r;
	cout << "圆的面积是：" <<3.14 * r*r << endl;
	cout << "圆的周长是：" << 2 * 3.14*r << endl;
	system("pause");
	return 0;

}
