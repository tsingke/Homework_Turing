#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int arr[4] = { 1,2,3,4 };
	int *a = arr;//此时a指向第一个元素，值为1
	int *&p = a;//a的值仍为1
	p++;//此时a的值变为2
	*p = 100;//a的值变为100
	cout << *a << "  " << *p << endl;
	for (int i = 0; i<4; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	int b = 10;
	p = &b;
	cout << *a << "  " << *p << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	getchar();
	system("pause");
	return 0;
}
