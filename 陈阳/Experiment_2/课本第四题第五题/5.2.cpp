#include <iostream>
using namespace std;
#define pi 3.14
double s, c; 
void area(int r,double &s)
{
	s = pi*r*r;
}
void perimeter(int r, double &c)
{
	c = 2 * pi*r;
}
int main()
{
	int r;
	cout << "please input r"<<endl;
	cin >> r;
	area(r, s);
	cout << "s=" << s << endl;
	perimeter(r,c);
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}

