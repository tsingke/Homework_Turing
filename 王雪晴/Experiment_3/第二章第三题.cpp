#include <iostream>
using namespace std;
#include <windows.h>
int main()
{
	int *p,i,j,a=0,b=0;
	p = new int[20];
	for (i = 0; i < 20; i++)
	{
		cin >> p[i];
		if (p[i] > 0)
			a++;
		if (p[i] < 0)
			b++;
	}
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < (j-i); j++)
		{
			if (p[i] < p[i + 1])
			{
				int temp;
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		} 
	}
	for (int i=0;i<20;i++)
	{
		cout << p[i];
	}
	cout << "正数个数为" << a << "\n";
	cout << "负数个数为" << b << "\n";
	delete[]p;
	system("pause");
	return 0;
}


