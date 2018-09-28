#include<iostream>
using namespace std;
void fun(int x, int &y)
{
	x += y;
	y += x;

}
int main()
{
	int x = 5, y = 10;
	fun(x, y);
	cout << x <<" "<<y << endl;
	fun(y, x);
	cout << "x=" << x << "y=" << y << endl;
	system("pause");
	return 0;
}
/*
5 25
x=35 y=25
*/