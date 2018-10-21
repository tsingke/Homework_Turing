#include<iostream>
#include<windows.h>
using namespace std;
void choiceSort(int p[],int num);
int main()
{
	int *p = new int[20];
	int num,a, b, c, d;
	a = b = c = d = 0;
	cout << "输入数组元素个数:" << endl;
	cin >> num;
	if (num > 20 || num < 1)
	{
		cout << "输入错误！" << endl;
	}
	cout << "请输入数组各元素的值：" << endl;
	for (int i = 0; i < num; i++)
		cin >> p[i];
	for (int i = 0; i < num; i++)
	{
		if (p[i] > 0)
			a++;
		else
			b++;
	}
	cout << "其中正数的个数为" << a << endl;
	cout << "其中负数的个数为" << b << endl;
	cout << "从小到大排序为：" << endl;
	choiceSort(p,num);
	for (int i = 0; i < num; i++)
		cout << "    " << p[i];
	cout << endl;
	int ave, var;
	int n = 0;
	int m = 0;
	for (int i = 0; i < num; i++)
		n = n + p[i];
	ave = n / num;
	cout << "数组的均值为：" << ave << endl;
	for (int i = 0; i < num; i++)
		m = m+(ave - p[i])*(ave - p[i]);
	var = m / num;
	cout << "数组的方差为：" << var << endl;
	delete[]p;
	system("pause");
	return 0;
}
void choiceSort(int p[],int num)
{
	for (int i = 0; i < num; i++)
	{
		int m = i;
		for (int j = i + 1; j < num; j++)
		{
			//如果第j个元素比第m个元素小，将j赋值给m   
			if (p[j] < p[m])
			{
				m = j;
			}
		}
		//交换m和i两个元素的位置   
		if (i != m)
		{
			double t = p[i];
			p[i] = p[m];
			p[m] = t;
		}
	}
}
