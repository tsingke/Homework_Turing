#include<iostream>
#include<Windows.h>
using namespace std;
class Date
{
private:
	int year,month,day;
public:
	Date(int y = 2000, int m = 1, int d = 1);
	void Display();
};
Date::Date(int y, int m, int d)
{
	cout << "Executing constructor¡­" << endl;
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
	Date initiateday;
	Date newday(2006);
	Date today(2006, 10, 17);
	cout << "Initiateday is:";
	initiateday.Display();
	cout << "Newday is:";
	today.Display();
	system("pause");
	return 0;
}