#include "example4_03_Circle.h"
double Circle::Area()
{
	return PI * Radius*Radius;
}
double Circle::Circumference()
{
	return 2 * PI*Radius;
}