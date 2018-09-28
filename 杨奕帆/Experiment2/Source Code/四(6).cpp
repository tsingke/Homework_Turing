#include<iostream>

using namespace std;
void fun(int a, int &b)
{
	a+= b;
	b += a;
}

int main()
{
	int x = 5, y = 10;
	fun(x, y);
	cout << "x=" << x << ",y=" << y << endl;
	fun(y, x);
	cout << "x=" << x << ",y=" << y << endl;
	system("pause");
	return 0;
}