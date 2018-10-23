#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int *ptr;
	int i, m = 0, n = 0;

	//分配连续十个int大小的内存空间
	ptr = new int[20];

	//输入数组元素
	cout << "请输入二十个数" << endl;
	for (i = 0; i<20; i++)
	{
		cin >> ptr[i];
	}

	//判断正负数个数
	for (i = 0; i<20; i++)
	{
		if (ptr[i]>0)
			m++;
		else if (ptr[i]<0)
			n++;
		else if (ptr[i] == 0)
		{
			m = m;
			n = n;
		}
	}

	//输出正负数个数
	cout << "正数的个数为:" << m << endl;

	cout << "负数的个数为:" << n << endl;

	//计算均值
	float sum1 = 0;

	float average = 0.0;

	for (i = 0; i<20; i++)
	{
		sum1 = sum1 + ptr[i];
	}

	average = sum1 / 20.0;

	cout << "这二十个数的均值:" << average << endl;

	//计算方差
	float variation = 0;

	float sum2 = 0;

	for (i = 0; i<20; i++)
	{
		sum2 = sum2 + (ptr[i] - average)*(ptr[i] - average);
	}

	variation = sum2 / 20.0;

	cout << "这二十个数的方差为：" << variation << endl;

	//排序算法
	int temp = 0;

	for (i = 0; i<20; i++)
	{
		int i, j, t;
		for (i = 0; i < 19; i++)
			for (j = 0; j < 19 - i; j++)
				if (ptr[j] > ptr[j + 1])
				{
			t = ptr[j];
			ptr[j] = ptr[j + 1];
			ptr[j + 1] = t;
				}
	}

	cout << "这二十个数由小到大排列为：" << endl;

	for (i = 0; i<20; i++)
	{
		cout << ptr[i] << " ";
	}

	cout << endl;

	delete[]ptr;

	system("pause");

	return 0;

}
