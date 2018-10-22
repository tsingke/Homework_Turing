#include<iostream>

using namespace std;


#define N 5 

int main()
{
	int *q;
	q = new int[N];
	int a = 0, b = 0;
	double	ave, var;
	for (int i = 0; i < N; i++)
	{
		cin >> q[i];
		if (q[i] > 0)
			a++;
		if (q[i] < 0)
			b++;

	}
	cout << "数组中正数的个数为：" << a << "\n数组中负数的个数为：" << b << endl;


	int c = 0;
	for (int i = 0; i < N; i++)
	{
		c = c + q[i];
	}
	ave = (float)c / (float)N;
	cout << "平均值为：" << ave << endl;



	for (int i = 0; i < N; i++)
	{
		c = pow((q[i] - ave), 2) + c;
	}
	var = (float)c / (float)N;
	cout << "方差为：" << var << endl;


	//排序
	int swap;
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (q[i] > q[j])
			{
				swap = q[i];
				q[i] = q[j];
				q[j] = swap;
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << q[i] << " ";
	}



	delete[]q;
	system("pause");

	return 0;
}