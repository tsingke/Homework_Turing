#include "stdio.h"
#include<iostream>
using namespace std;
#include<windows.h>




int question1()
{
	int a, b, c;
	char ch;
	cin >> a >> ch >> b >> c;
	cout << a << endl << ch << endl << b << endl << c;
	system("pause");
	return 0;
}

int question2()
{
	int arr[4] = { 1,2,3,4 };
	int *a = arr;
	int *&p = a;
	p++;
	*p = 100;
	cout << *a << " " << *p << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	int b = 10;
	p = &b;
	cout << *a << " " << *p << endl;
	for (int i = 0; i < 4; i++)
		cout << arr[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}

int i;
int question3()
{
	int i = 5;
	{
		int i;
		i = 7;
		cout << "::i=" << ::i << endl;
		cout << "i=" << i << endl;
		::i = 1;
		cout << "::i=" << ::i << endl;

	}
	cout << "i=" << i << endl;
	cout << "::i=" << ::i << endl;
	i += ::i;
	::i = 100;
	cout << "i=" << i << endl;
	cout << "::i=" << ::i << endl;
	system("pause");
	return 0;
}

void f(double x = 50.6, int y = 10, char z = 'A')
{
	cout << "x=" << x << " y=" << y << " z=" << z << endl;
}

int question4()
{
	double a = 216.34;
	int b = 2;
	char c = 'E';
	f();
	f(a);
	f(a, b);
	f(a, b, c);
	system("pause");
	return 0;
}

int & s(const int&a, int &b)
{
	b += a;
	return b;
}
int question5()
{
	int x = 500, y = 1000, z = 0;
	cout << x << '\t' << y << '\t' << z << '\n';
	s(x, y);
	cout << x << '\t' << y << '\t' << z << '\n';
	z = s(x, y);
	cout << x << '\t' << y << '\t' << z << '\n';
	s(x, y) = 200;
	cout << x << '\t' << y << '\t' << z << '\n';
	system("pause");
	return 0;
}

void fun(int x, int &y)
{
	x += y;
	y += x;
}

int question6()
{
	int x = 5, y = 10;
	fun(x, y);
	fun(y, x);
	cout << "x=" << x << ",y=" << y << endl;
	system("pause");
	return 0;
}
