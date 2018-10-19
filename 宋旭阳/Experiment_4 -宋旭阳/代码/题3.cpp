#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int *ptr;
	ptr = new int[20];
	cout << "请输入数据个数：";
	int num;
	cin >> num;
	cout << "请输入数据的值:" << endl;
	int pi = 0;
	int ni = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> ptr[i];
		if (ptr[i] > 0)
		{
			pi++;
		}
		else if (ptr[i] < 0)
		{
			ni++;
		}
	}
	cout << "正数个数为:" << pi << endl;
	cout << "负数个数为:" << ni << endl;
	sort(ptr, ptr + num);
	cout << "序列:";
	for (int i = 0; i < num; i++)
	{
		cout << ptr[i] << " ";
	}
	cout << endl;

	delete[] ptr;
	system("pause");
	return 0;
}