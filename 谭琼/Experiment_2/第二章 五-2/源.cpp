#include <iostream>
using namespace std;
const double pi = 3.14; //const double 与 double const 的区别？
int main()
{
	double r;
	cout << "请输入半径长" << endl;
	cin >> r;
	cout << "周长为：" << 2*pi*r << endl
		 << "面积为：" << pi*r*r << endl;
	system("pause");
	return 0;
}