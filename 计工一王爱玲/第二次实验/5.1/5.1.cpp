#include<iostream>
using namespace std;
int add(int a, int b)
{
	return a + b;
}
int main()
{
	int x, y, sum;
	cout << "please input x and y\n";
	cin >> x >> y;
	sum = add(x, y);
	cout << x << " " << y << " " << sum << endl;
	system("pause");
	return 0;
}