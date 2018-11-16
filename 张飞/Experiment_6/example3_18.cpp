#include"Date5.h"
void Fun(Date DateVar)
{
	DateVar.ModifyDate(2011, 11, 1);
	DateVar.Display();
}
int main()
{
	Date DateA;
	DateA.Display();
	Fun(DateA);
	cout << "after calling fun() DateA:";
	DateA.Display();
	return 0;
}