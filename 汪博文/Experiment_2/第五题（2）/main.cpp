#include <iostream>
using namespace std;
#include<windows.h>

int main()
{
	double r,S,s;
	cout << "Please input the R:" << endl;
	cin >> r;
	S = 3.14*r*r;
	s = 2 * 3.14*r;
	cout << "the area of the circle is " << S << endl;
	cout << "the perimeter of the circle is " << s << endl;
	system("pause");
	return 0;

}