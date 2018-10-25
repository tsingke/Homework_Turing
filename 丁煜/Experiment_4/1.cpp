#include<iostream>
#include"math.h"

using namespace std;

int main()
{
	int *p;
	int n = 0, m = 0, z = 0, j = 0, k = 0;
	float s = 0, f = 0;
	p = new int[21];
	int i;
	for (i = 0; (i < 20); i++)
	{
		cin >> p[i];
	}
	
	i = 0;
	while (i<20)
	{
		if (p[i]>0)
	 		n++;
		if (p[i]<0)
			m++;
		i++;
	}
	cout << "正数个数=" << n << " 负数个数=" << m << endl;
	for (i=0;i<20;i++)
	{
		s += p[i];
	}
	s = s / 20;
	cout << "平均值=" << s << endl;

	for (i=0;i<20;i++)
	{
		f += (p[i] - s)*(p[i] - s);
	}
	f = sqrt(f / 20);
	cout << "方差=" << f << endl;

	for (i = 0; i < 19; i++)
	{
		for (j = 0; j < 19; j++)
		{
			if (p[j] > p[j + 1])
			{
				k = p[j + 1];
				p[j + 1] = p[j];
				p[j] = k;
			}
		}
	}
	cout <<  "从小到大排列 ";
	for (i=0;i<20;i++)
	{
		cout << p[i] << "  ";
	}
	cout << endl;
	
	delete[]p;
	system ("pause");
	return 0;
}