#include <iostream>
#include <windows.h>
using namespace std;

float PI = 3.14;

float zhouchang(float r);
float s(float r);


int main()
{
	float r,l,S;
	cout << "Please input 半径=" << endl;
	cin >> r;
	l=zhouchang(r);
	S = s(r);
	cout << "周长=" << l << endl << "面积=" << S <<endl;
	system("pause");
	return 0;
	
}

float zhouchang(float r)
{
	return 2*PI*r;
}
float s(float r)
{
	return PI*r*r;
}