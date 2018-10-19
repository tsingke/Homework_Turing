#include<iostream>
#include<math.h>
using namespace std;
const int N = 20;


void SelectSort(int *r,int N)
{
	int i, j, k;
	int t;
	for (i = 0; i < N; i++)
	{
		k = i;
		for (j = i + 1; j < N; j++)
			if (r[j] < r[k])
				k = j;
		    if (k != i)
	     	{
			    t = r[i]; r[i] = r[k];r[k] = t;
		    }
	}
}








int main()
{
	int *ptr;
	ptr=new int[20];
	for (int i = 0; i < N;i++)
	{
		cin >> ptr[i];
	}
	

	int positive = 0, negative = 0,sum=0;
	for (int i=0;i<N;i++)
	{
		if (ptr[i]>0)
		{
			positive++;
		}
		if (ptr[i]<0)
		{
			negative++;
		}
		sum += ptr[i];
	}
	cout << "The sum of positive number is " << positive << endl << "The sum of negative number is " << negative << endl;
	


	float average = float(sum)/ float(N);
	cout << "The average of datam is " << average << endl;


	float t,sum2=0;
	for (int i=0;i<N;i++)
	{
		t = (ptr[i] - average)*(ptr[i] - average);
		sum2 += t;
	}
	float std_deviation = sqrt(sum2 / N);
	cout << "The standard deviation is " << std_deviation << endl;
	
	
	SelectSort(ptr, N);
	cout << "The order is ";

	for (int i = 0; i < N; i++)
		cout << ptr[i] << "  ";
	system("pause");
	delete []ptr;
	return 0;

}