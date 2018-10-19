#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	double r, c, s;
	cout << "Please input r:";
	cin >> r;
	double pi = 3.14;
	c = 2*pi * r;
	s = pi * r*r;
	cout << "c=" << c << "  s=" << s;
	system("pause");
	return 0;
}