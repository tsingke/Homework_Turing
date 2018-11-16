#include<iostream>
#include<Windows.h>
using namespace std;
class Date
{
	int year, month, day;
public:
	Date(int y = 2007, int m = 1, int day = 1);
	Date(const Date &date);//�������캯������
	int GetYear();
	int GetMonth();
	int GetDay();
	void Display();//��ͨ��Ա������������ݳ�Ա��ֵ
	~Date();
};
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	cout << "Constructor called.\n";
}
Date::Date(const Date &date)//�������캯���Ķ���
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
int Date::GetYear()//���г�Ա��������ȡyear����ֵ
{
	return year;
}
int Date::GetMonth()//���г�Ա��������ȡmonth����ֵ
{
	return month;
}
int Date::GetDay()//���г�Ա��������ȡday����ֵ
{
	return day;
}
void Date::Display()//�����������
{
	cout << year << "-" << month << "-" << day << endl;
}