#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	int *p;    // 定义指向数组的指针
	int positiveNum = 0, negativeNum = 0;    // 定义记录正、负数个数的变量
	p = new int[20];
	
	// for循环计数
	cout << "请输入数据：" << endl;
	for (int i = 0; i < 20; i++)
	{
		cin >> p[i];
		if (p[i] < 0)
		{
			negativeNum++;
		}
		else if (p[i] > 0)
		{
			positiveNum++;
		}
		else
			continue;
	}

	cout << "正数的个数为：" << positiveNum << " " << "负数的个数为：" << negativeNum << " " << endl;

	// 函数声明
	double means(int *p, int num);
	double variance(int *p, int num);
	void sort(int *p, int num);
	void output(int *p, int num);

	// 输出均值和方差
	cout << "均值为：" << means(p, 20) << endl;
	cout << "方差为：" << variance(p, 20) << endl;

	// 从小到大排序
	sort(p, 20);
	cout << "从小到大排序：" << endl;

	// 输出数据
	output(p, 20);
	delete []p;
	system("pause");
	return 0;
}

double means(int *p, int num)
{
	double sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += p[i];
	}
	return sum / num;
}

double variance(int *p, int num)
{
	double means(int *p, int num);
	double sumSquare = 0;
	double average = 0;
	
	average = means(p, num);
	for (int i = 0; i < num; i++)
	{
		sumSquare += (p[i] - average)*(p[i] - average);
	}
	return sumSquare / num;
}

void sort(int *p, int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				int t;
				t = p[j];
				p[j] = p[j + 1];
				p[j + 1] = t;
			}
		}
	}
}

void output(int *p, int num)
{
	for (int i = 0; i < num; i ++ )
	{
		cout << p[i] << " ";
	}
	cout << endl;
}