#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int *p;
	int a = 0;
	int b = 0;
	p = new int[20];
	cout << "请输入二十个整数：" << endl;
	for (int i = 0; i < 20; i++)
	{
		int a;
		cin >> a;
		p[i] = a;
	}
	//正负数的个数
	for (int j = 0; j < 20; j++)
	{
		if (p[j] > 0)
			a++;
		else if (p[j] < 0)
			b++;
	}
	cout << "正数的个数为：" << a << endl;
	cout << "负数的个数为：" << b << endl;
	//数组元素的均值和方差
	float c = 0;
	float sum = 0;
	for (int k = 0; k < 20; k++)
	{
		sum += p[k];
	}
	c = sum / 20;
	cout << "数组元素的均值为：" << c << endl;
	float x = 0;
	float y = 0;
	for (int i = 0; i < 20; i++)
	{
		y += ((p[i] - c)*(p[i] - c));
	}
	x = y / 20;
	cout << "数组元素的方差为：" << x << endl;
	//按照从小到大顺序输出数组排序结果
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20 - i; j++)
		{
			if (p[i] > p[i + j])
			{
				int temp;
				temp = p[i];
				p[i] = p[i + j];
				p[i + j] = temp;
			}
		}
	}
	cout << "数组元素从小到大顺序为：" << endl;
	for (int i = 0; i < 20; i++)
		cout << p[i] << "  ";
	cout << endl;


	delete[]p;
	system("pause");
	return 0;
}