#include <iostream>
using namespace std;
int add(int a, int b)
{
	return a + b;
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