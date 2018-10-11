#include<iostream>
using namespace std;
const double pi = 3.1415926535;
int main()
{
	double r,S,C;
	cout << "Please input r" << endl;
	cin >> r;
	S = pi*r*r;
	C = 2 * pi*r;
	cout << "Circumference=" << C << "  Area=" << S << endl;
	return 0;
}