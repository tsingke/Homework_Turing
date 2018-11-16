#include"Date4.h"
int main()
{
	Date *p = new Date(2010, 4, 1);
	cout << "one dynamic object is:" << endl;
	q->Display();
	delete q;
	q = new Date[3];
	q[0] = Date(2011, 5, 1);
	q[1] = Date(2011, 10, 1);
	for (int i = 0; i < 3; i++)
		q[i].Display();
	delete[]q;
	return 0;
}