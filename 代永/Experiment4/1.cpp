#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;

void fun1(float *ptr)   //����������������������С���ĸ���
{
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
	for (int i = 0; i < 20; i++)
	{
		if (ptr[i] > 0)
			a1++;
		else  if (ptr[i] < 0)
			a2++;
		if (ptr[i] == int(ptr[i]))
			a3++;
		else
			a4++;
	}

	cout << "���� ��" << a1 << " ����:" << a2 << " ������" << a3 << " С����" << a4 << endl;
}

void fun2(float  *ptr)            //�����ֵ����
{
	float sum=0,a,b=0;
	for (int i = 0; i < 20; i++)
		sum = sum + *ptr;
	a = sum / 20;
	for (int i = 0; i < 20; i++)
		b = b + pow(ptr[i] - a, 2);
	cout << "��ֵ��" << a << " ���" << b << endl;
}

void fun3(float *ptr)     //��С��������

{
	int a;
	for (int i = 0; i < 20; i++)
		for (int j = i + 1; j < 20; j++)
		{
			if (ptr[i] > ptr[j])
			{
				a = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = a;
			}
		}
	cout << "��С��������" << endl;
	for (int i = 0; i < 20; i++)
		cout << ptr[i] << " ";
}


int main()
{
	float *ptr;
	ptr = new float[20];
	cout << "������20������" << endl;
	for (int i = 0; i < 20; i++)
		cin >> *(ptr + i);

	fun1(ptr);				//����������������������С���ĸ���

	fun2(ptr);				//�����ֵ����

	fun3(ptr);				//��С��������

	delete[]ptr;
	system("pause");
	return 0;
}

