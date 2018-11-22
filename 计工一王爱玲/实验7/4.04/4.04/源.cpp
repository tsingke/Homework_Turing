#include<iostream>

using namespace std;
#include"标头.h"
int main()
{
	circle c1(2.5), c2;
	cout << "r of c1 is " << c1.get_r()<<endl;
	cout << "area of c1 is " << c1.circle_area() << endl;
	cout << "Long of c1 is " << c1.circle_L() << endl;
	cout << "r of c2 is " << c2.get_r() << endl;
	cout << "area of c2 is " << c2.circle_area() << endl;
	cout << "Long of c2 is " << c2.circle_L() << endl;

	system("pause");
}