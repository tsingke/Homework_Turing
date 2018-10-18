#include<iostream>
using namespace std;

int divide(int x, int y)
{
	if (y == 0) throw y;
	return x / y;
}

int main()
{
	int a = 10, b = 5, c = 0;
	try
	{
		cout << "a/b=" << divide(a, b) << endl;
		cout << "b/a=" << divide(b, a) << endl;
		cout << "a/c=" << divide(a,c) << endl;
		cout << "c/b=" << divide(c,b) << endl;
	}
	catch (int)
	{
		cout << "expect of divide zero" << endl;
	}
	cout << "calculate finished" << endl;
	system("pause");
	return 0;
}