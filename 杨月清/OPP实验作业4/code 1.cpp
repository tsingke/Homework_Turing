#include<iostream>
#include<windows.h>
#include<algorithm>
using namespace std;

int main()
{
	int a1 = 0, b1 = 0, a2 = 0, b2 = 0;
	double* num = new double[20];
	double mean = 0, sub = 0;
	for (int i = 0; i < 20; i++)
	{
		cin >> num[i];
		mean += num[i];
		if (num[i] > 0)
		{
			a1++;
		}
		else if (num[i] < 0)
		{
			b1++;
		}
		if (num[i] == int(num[i]))
		{
			a2++;
		}
		else {
			b2++;
		}
	}
	mean /= 20;
	for (int i = 0; i < 20; i++)
	{
		sub += num[i] - mean;
	}
	sub /= 20;

	cout << "正数个数:" << a1 << "  " << "负数个数:" << b1 << endl;
	cout << "整数个数:" << a2 << "  " << "小数个数:" << b2 << endl;
	cout << "数组元素的均值" << mean << " " << "数组元素的方差" << sub << endl;
	sort(num, num + 20);
	for (int i = 0; i < 20; i++)
	{
		cout << num[i] << " ";
	}
	cout << endl;
	delete num;
	system("pause");
	return 0;
}