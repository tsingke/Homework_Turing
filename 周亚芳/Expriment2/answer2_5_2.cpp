#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	const double ¦° = 3.14;
	int r;
	double area, perimeter;
	cout << "please input r:" ;
	cin >> r;
	area = r * r;
	perimeter = 2 * ¦°*r;
	cout << "area=" << area << "perimeter=" << perimeter << endl;
	system("pause");
	return 0;
}