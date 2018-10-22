#include<iostream>
using namespace std;
#include<math.h>
#define M_PI        3.14159265358979323846

double circlelength(int a)
{
	return (M_PI * 2*a);
}
int main()
{
	double a;
	cout << "请输入圆的半径:\n" << endl;
	cin >> a;
	cout << "圆的周长为:" << circlelength(a) << endl;
	system("pause");
	return 0;
}