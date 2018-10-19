#include <iostream>
#include "xx.h"
#include<Windows.h>
using namespace std;
int main()
{
	int *p;
	int a = 0,b = 0,i = 0;
	p = new int[20];
	cout << "Please enter 20 integers:" << endl;
	for (i=0;i<20;i++)
	{
		cin >> p[i];
		if (p[i] > 0)
			a++;
		else if(p[i]<0)
			b++;
	}
	cout << "The number of positive number is :" << a << endl;
	cout << "The number of negative number is : "<< b << endl;
	FC(p);
	sort(p);
	system("pause");
	delete []p;
}