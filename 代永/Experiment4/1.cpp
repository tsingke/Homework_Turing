#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;

void fun1(float *ptr)   //计算整数，负数，整数，小数的个数
{
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
	for (int i = 0; i < 20; i++)
	{
		if (ptr[i] > 0)
			a1++;
		else  if (ptr[i] < 0)
			a2++;
		if (ptr[i] == int(ptr[i]))
			a3++;
		else
			a4++;
	}

	cout << "正数 ：" << a1 << " 负数:" << a2 << " 整数：" << a3 << " 小数：" << a4 << endl;
}

void fun2(float  *ptr)            //计算均值方差
{
	float sum=0,a,b=0;
	for (int i = 0; i < 20; i++)
		sum = sum + *ptr;
	a = sum / 20;
	for (int i = 0; i < 20; i++)
		b = b + pow(ptr[i] - a, 2);
	cout << "均值：" << a << " 方差：" << b << endl;
}

void fun3(float *ptr)     //从小到大排序

{
	int a;
	for (int i = 0; i < 20; i++)
		for (int j = i + 1; j < 20; j++)
		{
			if (ptr[i] > ptr[j])
			{
				a = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = a;
			}
		}
	cout << "从小到大排序：" << endl;
	for (int i = 0; i < 20; i++)
		cout << ptr[i] << " ";
}


int main()
{
	float *ptr;
	ptr = new float[20];
	cout << "请输入20个数：" << endl;
	for (int i = 0; i < 20; i++)
		cin >> *(ptr + i);

	fun1(ptr);				//计算整数，负数，整数，小数的个数

	fun2(ptr);				//计算均值方差

	fun3(ptr);				//从小到大排序

	delete[]ptr;
	system("pause");
	return 0;
}

