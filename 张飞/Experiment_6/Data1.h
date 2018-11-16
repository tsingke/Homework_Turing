#include<iostream>
#include<Windows.h>
using namespace std;
class Date
{
private:
	int year;//private可以省略，为默认属性
	int month;//数据成员
	int day;
public:
	void SetDate(int, int, int);//对显示数据成员初始化的共有成员函数
	void Display();//执行显示功能的共有成员函数
	int GetYear();//公有成员函数，提取year变量值
	int GetMonth();//公有成员函数，提取Month变量值
	int GetDay();//公有成员函数，提取day变量值
};//此分号不能少，表示定义结束
void Date::SetDate(int y, int m, int d)//类外实现成员函数SeDate
{
	year = y;
	month = m;
	day = d;
}
int Date::GetYear()//类外实现公有函数GetYear（）,提取year变量值
{
	return year;
}
int Date::GetMonth()//类外实现公有函数GetMonth(),提取month变量值
{
	return month;
}
int Date::GetDay()//类外实现公有函数GetDay(),提取day变量值
{
	return day;
}
void Date::Display()//类外实现执行显示功能的公有成员函数Display()
{
	cout << year << "-" << month << "-" << day << endl;
}