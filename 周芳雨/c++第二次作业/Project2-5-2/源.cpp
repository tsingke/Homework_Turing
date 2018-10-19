#include<iostream>
#include<Windows.h>
using namespace std;

inline int add(int x, int y)
{
	return x + y;
}
int main()
{
	int x, y, sum;
	cout << "Please input x and y:" << endl;
	cin >> x >> y;
	sum = add(x, y);
	cout << x << "+" << y << "=" << sum << endl;
	system("pause");
	return 0;
}