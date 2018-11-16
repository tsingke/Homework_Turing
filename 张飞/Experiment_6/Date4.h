#include<iostream>
#include<Windows.h>
using namespace std;
class Date
{
	int year, month, day;
public:
	Date(int y = 2007, int m = 1, int day = 1);
	Date(const Date &date);//拷贝构造函数声明
	int GetYear();
	int GetMonth();
	int GetDay();
	void Display();//普通成员函数，输出数据成员的值
	~Date();
};
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	cout << "Constructor called.\n";
}
Date::Date(const Date &date)//拷贝构造函数的定义
{
	year = date.year;
	month = date.month;
	day = date.day;
	cout << "Copy Constructor called.\n";
}
Date::~Date()
{
	cout << "Destructor called.\n";
}
int Date::GetYear()//公有成员函数，提取year变量值
{
	return year;
}
int Date::GetMonth()//公有成员函数，提取month变量值
{
	return month;
}
int Date::GetDay()//公有成员函数，提取day变量值
{
	return day;
}
void Date::Display()//输出函数定义
{
	cout << year << "-" << month << "-" << day << endl;
}