#include <iostream>
#include <Windows.h>
using namespace std;
void f(double x = 50.6, int y = 10, char z = 'A');
int main()
{
	double a = 216.34;
	int b = 2;
	char c = 'E';
	f();
	f(a);
	f(a, b);
	f(a, b, c);
	system("pause");
	return 0;
}
void f(double x, int y, char z)
{
	cout << "x=" << x << " y=" << y << " z=s" << z << endl;
}
