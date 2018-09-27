#include<iostream>
using namespace std;

int add(int x, int y);

int main()
{
	int x, y, sum;
	cout << "please input x and y:" << endl;
	cin >> x >> y;
	sum = add(x, y);
	cout << "x + y = " << sum << endl;
	return 0;
}

int add(int x, int y)
{
	return x + y;
}