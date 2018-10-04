#include <iostream>
#include <Windows.h>
using namespace std;
const double pi = 3.1415926;

int main()
{
	double r, S, L;
	cout << "Please input r(circle radius):" << endl;
	cin >> r;
	S = pi*r*r;
	L = 2 * pi*r;
	cout <<"S(Circle area) = "<<S<<endl;
	cout << "L(Circumference) = " << L << endl;
	system("pause");
	return 0;
}
