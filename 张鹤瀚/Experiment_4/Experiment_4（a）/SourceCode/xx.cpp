#include <iostream>
#include <cmath>
#include "xx.h"
using namespace std;
void FC(int p[])
{
	int i, h = 0;
	double y=0;
	for (i=0; i < 20; i++)
		h += p[i];
	int av = h / 20;
	for (i=0;i<20;i++)
		y += pow(av - p[i], 2);
	double va = y / 20;
	cout << "The average is : " << av << endl;
	cout << "The variance is : " << va << endl;
}
void sort(int p[])
{
	int i, j, x = 0;
	for (i=0;i<20;i++)
	{
		for (j=i+1;j<20;j++)
		{
			if (p[i]>p[j])
			{
				x = p[j];
				p[j] = p[i];
				p[i] = x;
			}
		}
	}
	cout << "Sort as follows:  "<< endl;
	for (j=0;j<20;j++)
	{
		cout << p[j] <<"   ";
	}
}