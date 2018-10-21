#include<iostream>
using namespace std;
int cn(const void *a, const void *b)

{
	return *(int *)a - *(int *)b;
}
int main()
{
	int number=0;
	int size = 0;
	int Positive = 0;
	int negative = 0;
	int sum = 0;
	double mean = 0;
	int *num = new int[20];
	cout << "请输入20个及以下的数字，或输入q终止数字输入" << endl;
	while ((cin>>number)&&(size<20)&&(number!='q'))
	{
		num[size++] = number;
	}
	cout << "存储的数字:";
	for (int i = 0; i < size; i++)
	{
		cout<< num[i] << " ";
		if (num[i] > 0)
			Positive++;
		if (num[i] < 0)
			negative++;
		sum += num[i];
	}
	for (int j = 0; j < size; j++)
	{
		double a = (num[j] - (sum / size));
			mean += (a*a);
	}
	cout << endl;
	cout << "正数的数目:" << Positive << endl;
	cout << "负数的数目:" << negative << endl;
	cout << "均值" << sum / size << endl;
	cout << "方差:" << mean<<endl;
	qsort(num, size, sizeof(num[0]), cn);
	cout << "排序之后的结果:";
	for (int k = 0; k < size; k++)
	{
		cout << num[k] << " ";
	}
	delete []num;
	system("pause");
	return 0;
}