#include "Vectors.h"

Vectors::Vectors(int a,int b)
{
	x = a;
	y = b;
}

Vectors::~Vectors()
{

}

int Vectors::Getx()
{
	return x;
}

int Vectors::Gety()
{
	return y;
}

void Vectors::print()
{
	cout << "(" << x << "," << y << ")" << endl;
}

Vectors Vectors::operator+(Vectors vec)
{
	Vectors v;
	v.x = x + vec.x;
	v.y = y + vec.y;
	return v;
}

Vectors operator-(Vectors v1, Vectors v2)
{
	Vectors v;
	v.x = v1.x - v2.x;
	v.y = v1.y - v2.y;
	return v;
}
