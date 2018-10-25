#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int *ptr;
	ptr = new int[20];
	cout << "Please input:";
	for (int i = 0; i < 20; i++)
	{
		cin >> ptr[i];
	}



	//统计正负数
	int zs = 0, fs = 0;
	for (int i = 0; i < 20; i++)
	{
		if (ptr[i] > 0) zs++;
		else if (ptr[i] < 0) fs++;
	}
	cout << "正数：" << zs << endl << "负数：" << fs << endl;




	//求均值
	int sum = 0, M;
	for (int i = 0; i < 20; i++)
	{
		sum += ptr[i];
	}
	M = sum / 20;
	cout << "均值：" << M << endl;



	//求方差
	int s, t = 0;
	for (int i = 0; i < 20; i++)
	{
		t += (ptr[i] - M)*(ptr[i] - M);
	}
	s = t / 20;
	cout << "方差：" << s << endl;



	//排序
	for (int i = 0; i < 20; i++)
	{
		for (int j = i + 1; j < 20; j++) {
			if (ptr[i] > ptr[j]) {
				int temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
	for (int i = 0; i < 20; i++)
		cout << ptr[i] << endl;



	delete[]ptr;
	system("pause");
	return 0;
}