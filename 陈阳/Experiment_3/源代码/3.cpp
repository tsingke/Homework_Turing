#include<iostream>
using  namespace std;

void fun1(double *p)
{
	int a = 0, b = 0, c = 0, d = 0;
	for (int i = 0; i < 20; i++)
	{
		if (p[i] > 0)
			a++;
		else if (p[i] < 0)
			b++;
		if (p[i] == int(p[i]))
			c++;
		else
			d++;
	}

	cout << "正数个数：" << a << endl;
	cout << "负数个数：" << b << endl;
	cout << "整数个数：" << c << endl;
	cout << "小数个数：" << d << endl;
}

void fun2(double *p)
{
	double sum = 0, a, b = 0;
	for (int i = 0; i < 20; i++)
		sum = sum + *p;
	a = sum / 20;
	for (int i = 0; i < 20; i++)
		b = b + pow(p[i] - a, 2);
	cout << "均值：" << a << " 方差：" << b << endl;
}

void fun3(double *p)
{
	int a;
	for(int i=0;i<20;i++)
		for (int j = i + 1; j < 20; j++)
		{
			if (p[i] > p[j])
			{
				a = p[i];
				p[i] = p[j];
				p[j] = a;
			}
		}
	cout << "从小到大排序：" << endl;
	for (int i = 0; i < 20; i++)
		cout << p[i] << " ";
	cout << endl;
}

int main()
{
	double *p; 
	p = new double[20];
	cout << "输入20的数" << endl;
	for (int i = 0; i < 20; i++)
		cin >> p[i];

	fun1(p);

	fun2(p);

	fun3(p);

	delete[]p;
	system("pause");
	return 0;
}