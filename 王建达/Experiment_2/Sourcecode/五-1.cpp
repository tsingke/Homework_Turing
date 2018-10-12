#include<iostream>
#include<Windows.h>
using namespace std;
int add(int x, int y);
int main()
{
	int x,y,sum;
    cout<< "Please input x and y:\n ";
	cin >> x >> y;
	sum = add(x, y);
	cout << x <<"+"<< y << "=" << sum;
	system("pause");
	return 0;
}
int add(int a, int b)
{
	return a + b;
}
