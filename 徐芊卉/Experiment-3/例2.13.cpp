#include<iostream>
using namespace std;
int &fun(const int &x, int &y, int z)
{
	z++;
	y = x + y + z;
	return y;
}
int main()
{
	int a = 1, b = 2, c = 3, d = 0;
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
	fun(a, b, c);
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
	d = fun(a, b, c);
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
	fun(a, b, c) = 20;
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
	system("pause");
	return 0;
}