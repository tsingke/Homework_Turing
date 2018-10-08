//answer2_5_1.c
#include <iostream>
using namespace std;

int add(int a, int b)
{
	return a + b;
}
int main()
{
	int x, y, sum;
	cout << "please input x and y£º\n" << endl;
	cin >> x >> y;
	sum = add(x, y);
	cout << x << '+' << y << '=' << sum;
	return 0;
}
