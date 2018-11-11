#include <iostream>
using namespace std;
void main()
{
	float num, positive = 0, negative = 0, x = 0;
	float average = 0;
	float A = 0, B = 0, C = 0, D = 0;
	int *p = new int[20];
	cout << "请输入数字个数后输入各个数字";
	cin >> num;
	if (num > 20 || num < 0)
	{
		cout << "number error.\n";
		return;
	}
	for (int i = 0; i < num; i++)
		cin >> p[i];
	for (int i = 0; i < num; i++)
		if (p[i] > 0) positive++;
		else if (p[i] < 0) negative++;
	cout << "There are " << num << " figures,\n";
	cout << positive << " of them are positive numbers,\n";
	cout << negative << " of them are negatives.\n";
	for (int i = 0; i < num; i++)
		average = average + p[i];
	A = average / num;
	cout << "\n均值为" << A;
	for (int i = 0; i < num; i++)
	{
		B = p[i] - A;
		C = C + B * B;
	}
	D = C / num;
	cout << "\n方差为" << D;
	int t;
	for (int i = 0; i < num; i++)
		for (int j = 0; j < num - 1 - i; j++)
			if (p[j] > p[j + 1])
			{
				t = p[j];
				p[j] = p[j + 1];
				p[j + 1] = t;
			}
	cout << "\n从小到大排列";
	for (int i = 0; i < num; i++)
	{
		cout << p[i];
	}
	delete[]p;
	system("pause");
}





