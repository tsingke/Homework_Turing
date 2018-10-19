#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int *p;
	int a = 0;
	int b = 0;
	p = new int[20];
	cout << "请为这二十个整数赋值：" << endl;
	for (int i =0; i<20;i++)
	{
		int a;
		cin >> a;
		p[i] = a;
	}
	//正数 负数的个数
	for(int j=0;j<20;j++)
	{
		if (p[j] < 0)
			a++;
		else if (p[j] >0)
			b++;
	}
	cout << "正数的个数为：" << b << endl;
	cout << "负数的个数为：" << a << endl;
	//数组的元素的均值和方差
	float c = 0;
	float sum = 0;
	for (int k = 0; k < 20; k++)
	{
		sum += p[k];
	}
	c = sum / 20;
	cout << "数组的元素的均值为：" << c << endl;
	float s = 0;
	float z = 0;
	for (int i = 0; i < 20; i++)
	{
		z+= ((p[i] - c)*(p[i] - c));
	}
	s = z / 20;
	cout << "数组的元素的方差为：" << s << endl;
	//按照从小到大顺序输出数组排序结果
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20 - i; j++)
		{
			if (p[i]>p[i+j])
			{
				int temp;
				temp = p[i];
				p[i] = p[i + j];
				p[i + j] = temp;
			}
		}
	}
	cout << "按照从小到大顺序输出数组排序结果为："<<endl;
	for (int i = 0; i < 20; i++)
		cout << p[i] << "  ";
	cout << endl;


	delete[]p;
	system("pause");
	return 0;
}