#include<iostream>
#include<Windows.h>
using namespace std;
int add(int a, int b)
{
	return a+b;
}
int main()
{
	int x, y, z;
	cout << "Please input x and y:" << endl;
	cin >> x >> y;
	z = add(x, y);
	cout << x << "+" << y << "=" << z << endl;
	system("pause");
	return 0;
}
