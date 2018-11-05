#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	double r,C,S;
	cout << "Please input r:\n" << endl;
	cin >> r;
	S = 3.1415926*r*r;
	C = 2 * 3.1415926*r;
	cout << "面积S=" << S << "周长C=" << C << endl;
	system("pause");
	return 0;
}