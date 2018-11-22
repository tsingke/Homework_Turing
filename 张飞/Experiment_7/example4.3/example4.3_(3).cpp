#include<iostream>
#include<windows.h>
using namaespace std;
#include"example4.3.h"
int main()
{
	Circlle c1(3.5), c2;
	cout << "area of c1=" << c1.Area() << ",circumference of c1=" << c1.Circumference() << endl;
	cout << "area of c2=" << c2.Area() << ",circumference of c2=" << c1.Circumference() << endl;
	system("pause");
	return 0;
}