#include<iostream>

using namespace std;
int main()
{
	int *p,i,fcount=0,zcount=0,j,t,k=0;
	float avr = 0.0, s = 0.0;
	p = new int[20];
	for (i = 0; i <20;i++)
		cin >> p[i];
	for (i = 0;i < 20;i++)
	{
		if (p[i] < 0)
			fcount++;
		else if (p[i] > 0)
			zcount++;

	}
	for (i = 0; i <20; i++)
		avr += p[i] / 20.00;

	for (i = 0; i <20; i++)
		s += (p[i] - avr)*(p[i] - avr) / 20.00;
	cout << "正数的个数是" << zcount << endl;
	cout << "负数的个数是" << fcount << endl;
	cout << "平均值是" << avr << endl;
	cout << "方差是" << s << endl;

	for (i = 0; i < 19; i++)
	{
		k = i;
		for (j = i + 1; j < 20; j++)
		{
			if (p[j] < p[k])
			{
				k = j;
			}
		}
		t = p[k];
		p[k] = p[i];
		p[i] = t;
	}
	cout << "数组从小到大排序为：" << endl;
	for (i = 0; i < 20; i++)
		cout << p[i] << "\t";
	cout << endl;
	delete[]p;
	system("pause");
	return 0;
}