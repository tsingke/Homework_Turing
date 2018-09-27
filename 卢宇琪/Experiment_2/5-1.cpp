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
	cout << "Please input x and y:" << '\n';
	cin >> x >> y;
	sum = add(x, y);
	cout << x << "+" << y << "=" << sum << '\n';
	system("pause");
	return 0;
}
