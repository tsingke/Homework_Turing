#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int *p;
	int a = 0;
	int b = 0;
	p = new int[20];
	cout << "�������ʮ��������" << endl;
	for (int i = 0; i < 20; i++)
	{
		int a;
		cin >> a;
		p[i] = a;
	}
	//�������ĸ���
	for (int j = 0; j < 20; j++)
	{
		if (p[j] > 0)
			a++;
		else if (p[j] < 0)
			b++;
	}
	cout << "�����ĸ���Ϊ��" << a << endl;
	cout << "�����ĸ���Ϊ��" << b << endl;
	//����Ԫ�صľ�ֵ�ͷ���
	float c = 0;
	float sum = 0;
	for (int k = 0; k < 20; k++)
	{
		sum += p[k];
	}
	c = sum / 20;
	cout << "����Ԫ�صľ�ֵΪ��" << c << endl;
	float x = 0;
	float y = 0;
	for (int i = 0; i < 20; i++)
	{
		y += ((p[i] - c)*(p[i] - c));
	}
	x = y / 20;
	cout << "����Ԫ�صķ���Ϊ��" << x << endl;
	//���մ�С����˳���������������
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20 - i; j++)
		{
			if (p[i] > p[i + j])
			{
				int temp;
				temp = p[i];
				p[i] = p[i + j];
				p[i + j] = temp;
			}
		}
	}
	cout << "����Ԫ�ش�С����˳��Ϊ��" << endl;
	for (int i = 0; i < 20; i++)
		cout << p[i] << "  ";
	cout << endl;


	delete[]p;
	system("pause");
	return 0;
}