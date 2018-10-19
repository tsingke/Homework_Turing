#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14

int main()
{
	double r;
	cout << "please input r:"<<endl;
	cin >> r;
	cout << "圆的面积是：" << (PI*r*r) << endl;
	cout << "圆的周长是：" << (PI*r*2) << endl;
	system("pause");
	return 0;
}