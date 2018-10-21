/*
 *2018年10月18日  面向对象实验4
 *第一题
 */

#include<stdio.h>
#include<iostream>
#include<cmath>

using namespace std;
const int N = 20;

//统计数组正负数、均值、方差
int countNumber(int *p)
{
	int posi = 0, nega = 0, sum = 0, ave = 0;
	for (int i = 0; i < N; i++)
	{
		if (p[i] < 0)nega++;
		if (p[i] > 0)posi++;
		sum += p[i];
	}
	ave = sum / N;
	cout << "正数有" << posi << "个" << endl << "负数有" << nega << "个" << endl << "均值为" << ave << endl;
	
	double var=0;
	for (int i = 0; i < N; i++)
	{
		var+=pow((p[i] - ave), 2);
	}
	cout << "方差为" << var / N << endl;

	return 1;
}


//直接插入排序
void StraightInsertionSort(int *p)
{
	int t = 0;
	int i, j;
	for (i = 1; i < N; i++)//i表示插入次数，共进行N-1次插入
	{
		t = p[i];
		if (p[i] < p[i - 1])//如果后<前
		{
			j = i - 1;
			while ((j >= 0) && (t < p[j]))
			{
				p[j + 1] = p[j];
				j--;
			}
			p[j + 1] = t;
		}
		else//如果后>=前
		{
			i++;
		}	
	}
}
int main()
{
	int *p = new int[N];
	cout << "请输入" << N << "个数字:" << endl;

	for (int i = 0; i < N; i++)
	{
		cin >> p[i];
	}
	
	countNumber(p);//统计数组正负数、均值、方差
	StraightInsertionSort(p);//数组排序

	cout << "排序后数组中" << N << "个数字为" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << p[i] << " ";
	}

	delete p;
	cout << endl << "内存空间已释放" << endl;

	return 0;
}