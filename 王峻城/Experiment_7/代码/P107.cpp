#include <iostream>
using namespace std;
#include "P107hand.h"
int main()
{
	Circle c1(3.5), c2;
	cout << "area of c1=" << c1.Area() << " , circumference of c1=" << c1.Circumference() << endl;
	cout << "area of c1=" << c2.Area() << " , circumference of c1=" << c2.Circumference() << endl;

	system("pause");
	return 0;
}