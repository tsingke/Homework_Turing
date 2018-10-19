#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
void zhengfu(int *ptr, int &x, int &y)
{
	int j = 0;
	for (j = 0; j <= 9; j++)
	{
		if (ptr[j] < 0)
			x++;
		else if (ptr[j] > 0)
			y++;
	}
}
float average(int *ptr)
{
	int k = 0;
	float s = 0;
	float av=0;
	for (k = 0; k <= 9; k++)
	{
		s = s + ptr[k];
	}
	av = s / 10;
	return av;
}
 float fangcha(int *ptr,int av)
{
	int k = 0,cha=0,m=0,c=0;
	for (k = 0; k <= 9; k++)
	{
		cha = (ptr[k] - av)*(ptr[k]-av);
		m = m + cha;
	 }
	c = sqrt(m / 10);
	return c;
}
void paixu(int *ptr)
{
	int i, j,a;
	for(i=0;i<=9;i++)
		for(j=i+1;j<=9;j++)
			if(ptr[i]>ptr[j])
			{
				a=ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = a;
			}
}

int main()
{
	int *ptr;
	int a = 0, b = 0, i;
	float ave = 0,cha=0;
	ptr = new int[10];
	for (i = 0; i <= 9;i++)
	{
		cin >> ptr[i];
	}
	zhengfu(ptr,a,b);
	cout << "minnumber=" << a<<endl;
	cout << "maxnumber=" << b<<endl;
	ave = average(ptr);
	cout << average << endl;
	cha = fangcha(ptr,ave);
	cout << cha << endl;
	paixu(ptr);
	for (i = 0; i <= 9; i++)
		cout << ptr[i] << endl;
	delete[]ptr;
	system("pause");
	return 0;
}