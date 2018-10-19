#include<iostream>
#include<windows.h>
using namespace std;
const float  p = 3.141592653;
int main()
{
	float r, pe, area;
	cout << "请输入圆的半径"  << endl;
	cin >> r;
	pe = 2 * p*r;
	area = p * r*r;
	cout << "圆的周长为" << pe << endl;
	cout << "圆的面积为" << area << endl;
	system("pause");
	return 0;


}