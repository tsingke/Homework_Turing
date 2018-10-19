#include <iostream>
#include <windows.h>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int x, y, sum;
	cin >> x >> y;
	cout << "Please input x and y" << x << y << endl;
	sum = add(x, y);
	cout << "x=" << x << "y=" << y << "sum=" << sum << endl;

	system("pause");
	return 0;
}