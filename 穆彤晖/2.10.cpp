#include<iostream>
using namespace std;
int x = 5, y = 10;
int &r = x;
void printf()
{
	cout << "x=" << x << "y=" << y << " r=" << r << endl;
	cout << "Address of x" << &x << endl;
	cout << "Address of y" << &y << endl;
	cout << "Address of r" <<&r << endl;
}
int main()
{
	printf();
	r=y;
	y = 100;
	printf();
	x = 200;
	printf();
	system("pause");
	return 0;
}