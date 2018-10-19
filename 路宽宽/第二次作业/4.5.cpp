#include<iostream>
using namespace std;
int &s(const int &a, int&b)
{
	b += a;
	return b;
}

int main()
{
	int x = 500, y = 1000, z = 0;
	cout << x << "\t" << y << "\t" << z << endl;
	s(x, y);
	cout << x << "\t" << y << "\t" << z << endl;
	z = s(z, y);
	cout << x << "\t" << y << "\t" << z << endl;
	s(x, y) = 200;
	cout << x << "\t" << y << "\t" << z << endl;
	system("pause");
	return 0;
}