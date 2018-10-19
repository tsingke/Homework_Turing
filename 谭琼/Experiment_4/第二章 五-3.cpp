#include <iostream>
using namespace std;
int main()
{
	int *array;
	int a = 0, b = 0, i, total = 0;
	double aver,c,temp;
	array = new int[20];
	for (i = 0; i < 20; i++)
	{
		cin >> array[i];
		total += array[i];
		if (array[i] > 0)
		{
			a++;
		}
		if (array[i] < 0)
		{
			b++;
		}
	}
	for (i = 0; i < 20 - 1; i++)
	{
		for (int j = 0; j < 20 - 1 - i; j++)
		{
			if (array[i] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	aver = total / 20;
	for (i=0;i<20;i++)
	{
		temp += (aver - array[i])*(aver - array[i]);
	}
	c = temp / 20;
	for (int i = 0; i < 20; i++)
	{
		cout << array[i] <<" ";
	}
	cout <<endl
		<< "正数为" << a << endl
		<< "负数为" << b << endl
		<< "均值为" << aver << endl
		<< "方差为" << c << endl;
	delete array;
	system("pause");
	return 0;
}