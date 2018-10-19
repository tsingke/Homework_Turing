#include<iostream>
#include<windows.h>

using namespace std;
int *ptr,*p,n=0,pos=0,neg=0;
void BubbleSort(int* p, int n);
int main()
{
	ptr = new int[20];
	p = ptr;
	double var=0, ave = 0;
	for (int i = 0; i < 20; i++)
	{
		cin >> *(p+i);
		
		if (*(p + i) > 0) pos += 1;
		else if (*(p + i) < 0) neg += 1;
		n++;
		if (getchar() == '\n') break;
	

	} 
	cout << n << endl;
	BubbleSort(ptr, n);
	cout<<"排序后的数字："<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<*(ptr+i)<<" ";
	}
	cout << endl;
	cout<<"正数个数: "<<pos<<" 负数个数: "<<neg<<endl;
	for (int i = 0; i < n; i++)
	{
		ave =ave +double(*(ptr + i)) / n;

	}

	for (int i = 0; i <n; i++)
	{
		var =var +(double(*(ptr + i)) - ave)*(double(*(ptr + i)) - ave) / n;
	}
	cout << "标准差" << sqrt(var) << "平均值" << ave << endl;
	delete[] ptr;
return 0;
}
void BubbleSort(int* p, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++) 
		{
			if (*(p+j) > *(p+j+1))
			{
				int temp =*(p+j) ;
				 *(p+j)= *(p+j+1);
				 *(p+j+1)= temp;
			}
		}
	}
}