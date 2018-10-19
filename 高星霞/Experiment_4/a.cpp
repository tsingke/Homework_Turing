//由于20个数调试比较麻烦，我换成了5个数
//#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	int i;
	ptr = new int[5];
	cout << "请输入5个数:" << endl;
	for (i = 0; i < 5; i++)
	{
		cin >> ptr[i];

	}
	int cout1 = 0, cout2 = 0;
	for (i = 0; i < 5; i++)
	{
		if (ptr[i] > 0)
		{
			cout1++;
		}
		else
		{
			cout2++;
		}
	}
	cout << "正数的个数为:" << cout1 << endl;
	cout << "负数的个数为:" << cout2 << endl;

	float aver = 0;
	float var = 0;
	for (i = 0; i < 5; i++)
	{
		aver += ptr[i];
	}
	aver = aver / 5;
	cout << "这5个数字的平均值为:" << aver << endl;
	for (int j = 0; j< 5; j++)
	{
		var += ((ptr[j] - aver), 2);

	}
	var = var / 5;
	cout << "这5个数字的方差为:" << var << endl;
	float t;
	for (i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (ptr[i] > ptr[j])
			{
				t = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = t;
			}
		}

	}
	cout << "这5个数从小到大输出为:";
	for (i = 0; i < 5; i++)
	{
		cout << ptr[i] << " ";
	}
	delete[]ptr;

	system("pause");
	return 0;
}