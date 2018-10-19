#include <iostream>
#include <cmath>
#include<float.h>
#include <windows.h>
using namespace std;
void cpnn(int *ptr)
{
	int cpn = 0, cnn = 0;
	for (int i = 0; i < 20; i++)
	{
		if (ptr[i] > 0)
		{
			cpn++;
		}
		else
		{
			cnn++;
		}
	}
	cout << "cpn: " << cpn << "\t  cnn: " << cnn << endl;
}

void calc(int *ptr)
{
	double sum = 0, mean = 0, variance = 0;
	for (int i = 0; i < 20; i++)
	{
		sum = sum + ptr[i];
	}
	mean = sum / 20;
	double m = 0;
	for (int i = 0; i < 20; i++)
	{
		m = m + (ptr[i] - mean)*(ptr[i] - mean);
	}
	variance = sqrt(m) / 20.0;
	cout << "sum:" << sum << "\t  variance:" << variance << endl;
}

void sort(int *ptr)
{
	double a[20] = {  };
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (ptr[i] < ptr[j])
			{
				a[i]++;
			}
		}
		//cout << "第" << i << "个a的值为：\t" << a[i] << endl;
	}
	int l = 0;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (a[i] > a[j])
			{
				l = i;
			}
			else
			{
				l = j;
			};
		}
		a[l] = -DBL_MAX;
		//cout << l << "zhi" << ptr[l] << endl;
		cout << "从小到大输出：" << ptr[l] << endl;
	}
}