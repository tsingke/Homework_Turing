#include<iostream>
#include<Windows.h>
using namespace std;
#include"Date4.h"
int main()
{
	Date today;//����һ������
	Date newday(2011, 10, 18);//�ٶ���һ������
	newday.Display();//���ú������
	system("pause");
	return 0;
}