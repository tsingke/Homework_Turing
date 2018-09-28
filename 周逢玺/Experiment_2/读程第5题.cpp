//¶Á³ÌµÚ5Ìâ£ºanswer2_4_5.cpp
#include<iostream>
using namespace std;

int & s(const int &a, int &b)
{
	b += a;
	return b;
}

int main()
{
	int x = 500, y = 1000, z = 0;
	cout << x << '\t' << y << '\t' << z << '\n';
	s(x, y);
	cout << x << '\t' << y << '\t' << z << '\n';
	z = s(x, y);
	cout << x << '\t' << y << '\t' << z << '\n';
	s(x, y) = 200;
	cout << x << '\t' << y << '\t' << z << '\n';
	return 0;
}