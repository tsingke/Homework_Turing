#include"Date3.h"
#include<Windows.h>
Date f(Date Q)//��ͨ����������Ϊ������Ϊֵ��ʽ����
{
	Date R(Q);//��1�ֵ��ÿ������캯���������Ӧ��6�����
	return Q;
}
int main()
{
	Date day(2011, 5, 26);
	Date day3;
	Date day2(day1);
	Date day4 = day2;
	day3 = day2;
	day3 = f(day);
	day3.Display();
	system("pause");
	return 0;
}