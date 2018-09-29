//¶Á³ÌµÚ6Ìâ£ºanswer2_4_6.cpp
#include<iostream>
using namespace std;

void fun(int x, int y)
{
	x += y;
	y += x;
}

int main()
{
	int x = 5, y = 10;
	fun(x, y);
	fun(y, x);
	cout << "x=" << x << ",y=" << y << endl;
	return 0;
}