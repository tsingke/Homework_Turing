#include<iostream>
using namespace std;
#include<windows.h>
double p = 3.14;
int main() 
{
	double r, s, c;
	cout << "请输入圆的半径：";
	cin >> r;
	s = p * r*r;
	c = 2 * p*r;
	cout << "圆的周长为：" << endl << c <<endl<< "圆的面积为：" << endl << s << endl;
	system("pause");
	return 0;
}