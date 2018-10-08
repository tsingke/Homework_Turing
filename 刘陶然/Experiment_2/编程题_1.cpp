#include<iostream>
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
	return 0;
}