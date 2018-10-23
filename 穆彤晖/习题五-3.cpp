#include<iostream>
using namespace std;
int main()
{
	int j=0, k=0, t, sum=0;
	double variance = 0;
	int *ptr;
	ptr = new int[20];
	for (int i = 0; i < 20; i++)
	{
		cin >> ptr[i];
	}
	for (int i = 0; i < 20; i++)
	{
		sum = sum + ptr[i];
		if (ptr[i] > 0)
			j++;
		else
			k++;
	}
	double average=0;
	cout << "average=" << sum/20 << endl;
	cout << "正数个数：" << j << "负数个数：" << k << endl;
	for (int i = 0; i < 19; i++)
		for(int j = 0; j < 19 - i; j++)
			if(ptr[j]>ptr[j+1])
			{
				t = ptr[j]; ptr[j] = ptr[j + 1]; ptr[i + 1] = t;
			}
	for (int i = 0; i < 20; i++)
	{
		cout << ptr[i];
	}
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		variance = variance + (ptr[i] - average)*(ptr[i] - average);
	}
	cout << "variance=" << variance/20 << endl;
	delete []ptr;
	system("pause");
	return 0;
}