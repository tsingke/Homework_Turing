#include<iostream>
using namespace std;
float average_(int *a )      //计算平均数
{
	float sum=0;
	for (int i=0;i<20;i++)
	{
		sum += a[i];
	}
	return sum / 20;
}
int main()
{
	int *a;
	int zheng=0, fu=0;
	a = new int[20];
	cout << "接下来让我们耐心地输入20个整数：" << endl;
	for (int i = 0;i < 20 ; i++)
	{
		cin >> a[i];
	}
	for (int i=0;i<20;i++)
	{
		if (a[i]<0)
		{
			fu++;
		}
		if (a[i]>0)
		{
			zheng++;
		}
	}
	cout << "正数的个数为：" << zheng << endl;
	cout << "负数的个数为：" <<fu <<endl;
	for (int i=0;i<19;i++)      //排序
	{
		for (int j=i+1;j<20;j++)
		{
			if (a[i]>a[j])
			{
				int b;
				b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
			
		}
	}
	float ave = average_(a);
	float fangcha,sum=0;
	for (int i=0;i<20;i++)   //计算方差
	{
		sum += pow(a[i] - ave, 2);
	}
	fangcha = sqrt(sum / 20.0);
	cout << "平均值为：" << ave <<endl;
	cout << "标准方差为：" <<fangcha << endl;
	for (int i = 0; i < 20; i++)   //输出
	{
		cout << a[i]<<" ";
	}
	cout << endl;
	delete []a;
	system("pause");
	return 0;
}