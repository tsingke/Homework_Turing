#include <iostream>
using namespace std;

void InsertSort(float*, int);
void StdDeviation(float*, int);
int main()
{
	float* ptr = NULL;
	int cntp = 0;
	int cntn = 0;
	int cnts = 0;
	int cntb = 0;
	int n = 0;
	ptr = new float[20];
	cin >> n;
	cout << "排序前：";
	for (int i = 0; i < n; i++)
	{
		cin >> ptr[i];
	}
	for (int i=0; i<n; i++)
	{
		float a = ptr[i];
		if (a > 0) cntp++;
		else if (a<0) cntn++;
		if (a - int(a) == 0) cnts++;
		else cntb++;
		
		
	}
	cout << "正数:" << cntp;
	cout << "负数：" << cntn;
	cout << "小数：" << cntb;
	cout << "整数：" << cnts;
	//getchar();
	InsertSort(ptr, n);
	delete[]ptr;
	getchar(); getchar();
	return 0;
}
void InsertSort(float* ptr, int n) 
{
		int i, j;
		float temp;

		for (i = 1; i<n; i++)
		{
			temp = ptr[i];
			for (j = i-1;j>=0&&temp<ptr[j]; j--)
			{
				ptr[j + 1] = ptr[j];
			}
			ptr[j + 1] = temp;
		}
		cout << "排序后：";
		for (int k=0; k<n; k++)
		{
			cout << ptr[k] << " ";
		}
		cout << endl;
}
void StdDeviation(float* ptr, int n)
{
	int i, j;
	float sum = 0;
	float ave, stdd;
	stdd = 0;
	for (i = 0; i < n; i++)
	{
		sum = ptr[i] + sum;
	}
	ave = sum / n;
	cout << "均值为：" << ave;
	for (j = 0; j < n; j++)
	{
		stdd = stdd + (ptr[j] - ave) *(ptr[j] - ave);
	}
	stdd = stdd / n;
	cout << "方差为：" << stdd;

}