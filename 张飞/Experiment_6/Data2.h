#include<iostream>
using namespace std;
class Data
{
private:
	int year;
	int month;
	int day;
public:
	void SetDate(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	int GetYear()
	{
		return year;
	}
	int GetMonth()
	{
		return month;
	}
	int GetDay()
	{
		return day;
	}
	void Display()
	{
		cout << year << "-" << month << "-" << day << endl;
	}
};