#include<iostream>
#include<Windows.h>
using namespace std;
class Date
{
private:
	int year, month, day;
public:
	Date(int, int, int);
	void Display();
};
Date::Date(int y, int m, int d)
{
	cout << "Executing constructor¡­\n";
	year = y;
	month = m;
	day = d;
}
void Date::Display()
{
	cout << year << "-" << month << "-" << day << endl;
}
int main()
{
	Date today(2006, 10, 17);
	cout << "Today is:";
	today.Display();
	system("pause");
	return 0;
}