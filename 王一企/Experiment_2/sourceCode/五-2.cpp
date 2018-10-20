#include <iostream>
#include <windows.h>

using namespace std;

#define P 3.1415926

int main()
{
	double r;
	cout << "输入圆的半径";
	cin >> r;
	cout << "周长:" << 2 * P*r << endl;
	cout << "面积:" << P * r*r << endl;

	system("puase");
	return 0;
}