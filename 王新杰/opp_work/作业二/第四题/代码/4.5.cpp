//answer2_4_5.cpp
#include<iostream>
#include<windows.h>
using namespace std;
int & s(const int &a, int &b)
{
	b += a;
	return b;
}
int main()
{
	int x = 500, y = 1000, z = 0;
	cout << x << '\t' << y << '\t' << z << '\n';// 500 1000 0
	s(x, y);
	cout << x << '\t' << y << '\t' << z << '\n';//500 1500 0
	z = s(x, y);
	cout << x << '\t' << y << '\t' << z << '\n';//500 2000 2000
	s(x, y) = 200;
	cout << x << '\t' << y << '\t' << z << '\n';//500 200 2000


	system("pause");
	return 0;
}