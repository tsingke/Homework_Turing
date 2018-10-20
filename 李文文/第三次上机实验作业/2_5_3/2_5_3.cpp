#include<iostream>
using namespace std;

void sort(int a[], int n);
float var(float aver,int* p,int n);
int main()
{
	int *p;
	p = new int[20];           //申请动态内存空间

	cout << "请输入20个整数值：" << endl;
	for (int i = 0; i<20; i++)
	{
		cin >> p[i];
	}						  //输入数据的值


	int count1 = 0, count2 = 0, sum = 0;
	for (int i = 0; i<20; i++)
	{
		if (p[i] != 0)
		{
			if (p[i]>0)
				count1++;   
			else count2++;   
		}

		sum += p[i];
	}

	cout << "正整数个数为：" << count1 << endl;    //正整数个数
	cout << "负整数个数为：" << count2 << endl;    //负整数个数

	float aver;
	aver = sum / 20;      
	cout << "平均数为：" << aver << endl;          //平均数
	
	cout << "方差为：" << var(aver,p,20)<< endl << "将数据排序后结果为：";//求方差;

	sort(p, 20);
	for (int i = 0; i < 20; i++)
		cout << ' ' << p[i];
	cout << endl;

	delete[]p;									  //释放内存空间
	system("pause");
	return 0;
}

void sort(int a[], int n)
{
	int i, j, k, t;
	for (i = 0; i<n - 1; i++)
	{
		k = i;
		for (j = i + 1; j<n; j++)
		{
			if (a[k]>a[j])
			{
				k = j;
			}
		}
		if (k != i)
		{
			t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
}

float var(float aver, int* p,int n)
{
	int t = 0;
	
	for (int i = 0; i<n; i++)
	{
		t += ((p[i] - aver)*(p[i] - aver));
	}
	return  (t / 20);
}
