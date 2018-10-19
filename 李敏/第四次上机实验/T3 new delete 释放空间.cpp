#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a, b, c, sum, aver,av;
	a = 0;
	b = 0;
	c = 0;
	sum = 0;
	int *ptr;
	ptr =new int[20];
	for (int i = 0; i < 20; i++)
	{
		cin >> ptr[i];
		if (ptr[i] >= 0)
			a++;
		if (ptr[i]< 0)
			b++;
		sum = ptr[i] +sum;
	}
	aver = sum / 20;
	for (int i = 0; i < 20; i++)
	{
		c = c + (ptr[i] - aver)*(ptr[i] - aver);
	}
	av = c / 20;
	sort(ptr, ptr+20);
	cout << "排序结果：" << endl;
	for (int i = 0; i < 20; i++)
		cout << ptr[i] << " ";
	cout << endl;
	cout <<"正数的个数为" << a << endl;
	cout <<"负数的个数为" << b << endl;
	cout << "均值为" << aver << endl;
	cout << "方差为" << av << endl;
	delete[]ptr;
	system("pause");
}