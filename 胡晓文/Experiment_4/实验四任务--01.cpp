#include<iostream>
#include<windows.h>
using namespace std;
int main() 
{

	//开辟连续20个int大小的内存空间
	int *p;
	p = new int[20];


	//确定要输入的个数
	cout << "请输入要运算的整数的个数：" << endl;
	int n;
	cin >> n;
	if (n>20) 
	{
		cout << "个数不应超过20个" << endl;
	}
	else 
	{


		//向数组中输入整数
		cout << "请输入" << n << "个整数";
		int a;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			*(p+i) = a;
		}
	}



	//计算正数、负数、平均数、方差
	int positive = 0, negative = 0;
	float sum = 0, variance = 0, aver = 0;
	for (int i = 0;i<n;i++) 
	{


		//计算正数
		if (*(p+i)>0) 
		{
			positive++;
		}


		//计算负数
		else if (*(p+i)<0)
		{
			negative++;
		}
		float b = float(*(p + i));
		sum = sum + b;
	}

	//计算平均数
	aver = sum / n;


	//计算方差
	float v = 0;
	for (int i = 0; i < n;i++) 
	{
		float f = float(*(p + i));
		v = v + (f - aver)*(f - aver);
	}
	variance = v / n;



	cout << "正数的个数为：" << positive << "个" << endl;
	cout << "负数的个数为：" << negative << "个" << endl;
	cout << "平均数为：" << aver << endl;
	cout << "方差为：" << variance << endl;



	//对数组中的数据进行排序
	int l;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (*(p+i)>*(p+j)) 
			{
				l = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = l;
			}
		}
	}
	cout << "对数组从小到大进行排序为：" << endl;
	for (int i = 0; i < n;i++) 
	{
		cout << *(p + i) << "  " << endl;
	}
	delete []p;
	system("pause");
	return 0;
}