#include"Date4.h"
int main()
{
	Date array[3] = { Date(2011, 5, 1), Date(2011, 10, 1) };
	for (int i = 0; i < 3; i++)
		array[i].Display();
	return 0;
}