#include"Date4.h"
Date DateA(2010, 1, 1), DateB(2010, 5, 1);
Date &pDate = DateA;
void f()
{
	DateA.Display();
	DateB.Display();
	pDate.Display();
}
int main()
{
	cout << "original DateA,DateB,pDate:" << endl;
	f();
	pDate = DateB;
	cout << "after pDate=DateB,DateA,DateB,pDate:" << endl;
	f();
	pDate = Date(2010, 10, 1);
	cout << "after pDate=Date(2010,10,1),DateA,DateB,pDate:" << endl;
	f();
	return 0;
}