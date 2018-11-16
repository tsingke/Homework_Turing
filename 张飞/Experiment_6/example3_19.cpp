#include"Date5.h"
void Fun(Date *pDate)
{
	pDate->ModifyDate(2011, 11, 1);
	pDate->Display();
}
int main()
{
	Date DateA(2011);
	DateA.Display();
	Fun(&DateA);
	cout << "after calling fun() DateA:";
	DateA.Display()
		return 0;
}