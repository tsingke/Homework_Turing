#include<iostream>
using namespace std;
float Pi = 3.14;
int main()
{
	int r;
	cout << "Please input the radius :";
	cin >> r;
	cout << endl;
	float c = 2*Pi * r;
	float s = Pi * r*r;
	cout << "The circumference is " << c << '\t' << "The area is :" << s << endl;
	system("pause");
	return 0;
}