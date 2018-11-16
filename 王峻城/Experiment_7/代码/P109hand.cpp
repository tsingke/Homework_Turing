#include "hand.h"

double Circle::Area()
{
	double a = GetRadius();
	return PI * Radius*Radius;
}
double Circle::Circumference()
{
	return PI * 2 * Radius;
}
double Circle::GetRadius() const
{
	return Radius;
}
