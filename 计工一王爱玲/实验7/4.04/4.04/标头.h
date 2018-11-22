#pragma once
#ifndef _circle
#define _circle
class circle
{
private:
	double r;
	const double PI;
public:
	circle(double r1 = 0.0) : PI(3.1415926)//常数据成员只能这样初始化
	{
		r = r1;
	}
	double circle_area()
	{

		return PI * r*r;

	}
	double circle_L()
	{
		return 2 * PI*r;
	}
	double get_r()const
	{
		return r;
	}

};
#endif
