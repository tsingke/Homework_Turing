#define _USE_MATH_DEFINES

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	cout << "please input the R of your circle" << endl;
	int r;
	cin >> r;
	void computePerimeter(int r);
	void computeArea(int r);

	// compute the perimeter of circle
	computePerimeter(r);

	// compute the area of circle
	computeArea(r);
}

// compute the perimeter of circle
void computePerimeter(int r)
{
	cout << "the perimeter of the circle is: " << 2*M_PI*r << endl;
}

// compute the area of the circle
void computeArea(int r)
{
	cout << "the area of the circle is: " << M_PI * r*r << endl;
}