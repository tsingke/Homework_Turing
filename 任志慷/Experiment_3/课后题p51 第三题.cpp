#include<iostream>

using namespace std;

void sort1(float x[])//由小到大排序
{
	int n;
	sort(x[0],x[n],cmp);
	bool cmp(int a,int b)
	{
		return a<b;
	}
    cout << "由小到大排序结果:" << a[b] << endl;
}

void statistic1(float *x)//计算正负数，整数小数。
{
	int elem 1, elem 2, elem 3,elem 4;
	for(int i=0;i<=19;i++)
    {
        if(x[i]>=0)
            elem1++;
        else
            elem2++;
        if(x[i]==int(x[i]))
            elem3++;
        else
            elem4++;
    }
    cout << "正数:" << elem1 << "负数:" << elem2 << "整数:" << elem3 << "小数:" << elem4 << endl;
}

void var(float *x)   //计算均值和方差
{
    float sum=0,a,b=0;
    for(int i=0;i<=19;i++)
    {sum=sum+*x;
     a=sum/20;
     for(int i=0;i<=19;i++)
     b=b+pow(x[i]-a,2);
    }
    cout << "均值:" << a << "方差:" << b << endl;
}

int main{
	int *a;
	a = new int[20];
	int b;
	for (b=0;b<=19;b++)
	cin >> "请输入二十位整数" >> a[b] >> endl;
	sort1(a[b]);
	statistic1(a[b]);
	var(*a);
	delect[]a;
	systerm("pause");
	return 0;
}
