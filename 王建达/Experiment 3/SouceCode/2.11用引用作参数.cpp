#include<iostream>

using namespace std;

void swap(int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
}

int main()
{
	int a = 3, b = 5, c = 10, d = 20;
	cout << "a=" << a << "   b=" << b << endl;
	swap(a, b);
	cout << "a=" << a << "   b=" << b << endl;
	cout << "c=" << c << "   d=" << d << endl;
	swap(c, d);

	cout << "c=" << c << " d=" << d << endl;

	system("pause");
	return 0;
}