#include<iostream>
#include"标头.h"
using namespace std;
int main()
{
	circle c1(2.5), c2;
	cout << "area of c1 is " << c1.circle_area() << endl;
	cout << "Long of c1 is " << c1.circle_L ()<< endl;
	cout << "area of c1 is " << c2.circle_area() << endl;
	cout << "Long of c1 is " << c2.circle_L ()<< endl;

	system("pause");
}