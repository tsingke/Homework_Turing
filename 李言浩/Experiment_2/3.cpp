#include<iostream>
using namespace std;
int main()
{
	int *p, i, a = 0, b = 0,c = 0,s = 0,j,t;
	p = new int[20];
	for (i = 0; i < 20; i++)
	{
		cin >> p[i];
		if (p[i] > 0)
			a++;
		if (p[i] < 0)
			b++;
	}
	cout << "正数为" << a << endl;
	cout << "负数为" << b;
	for (i = 0; i < 20; i++)
		c = p[i] + c;
	    s = s + p[i] ^ 2;
		cout << "均值为" << c / 20 << endl;
		cout << "方差为" << s / 20 << endl;
		for (j = 0; j < 20; j++)
			for (i = 0; i < 20 - j; i++)
				if (p[i] > p[i + 1])
				{
					t = p[i];
					p[i] = p[i + 1];
					p[i + 1] = t;
				}
		printf("排序好的数组为：\n");
		for (i = 0; i < 20; i++)
			printf("%d ", p[i]);
		printf("\n");
		delete[]p;
	return 0;
}
