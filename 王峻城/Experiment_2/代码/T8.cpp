#include <iostream>
using namespace std;
const double PI = 3.1415;
int main()
{
	cout << "请输入圆的半径:";
	double r;
	cin >> r;
	cout << "圆的周长为:" << 2 * PI*r << endl;
	cout << "圆的面积为:" << PI * r * r << endl;

	system("pause");
	return 0;
}