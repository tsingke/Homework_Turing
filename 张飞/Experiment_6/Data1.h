#include<iostream>
#include<Windows.h>
using namespace std;
class Date
{
private:
	int year;//private����ʡ�ԣ�ΪĬ������
	int month;//���ݳ�Ա
	int day;
public:
	void SetDate(int, int, int);//����ʾ���ݳ�Ա��ʼ���Ĺ��г�Ա����
	void Display();//ִ����ʾ���ܵĹ��г�Ա����
	int GetYear();//���г�Ա��������ȡyear����ֵ
	int GetMonth();//���г�Ա��������ȡMonth����ֵ
	int GetDay();//���г�Ա��������ȡday����ֵ
};//�˷ֺŲ����٣���ʾ�������
void Date::SetDate(int y, int m, int d)//����ʵ�ֳ�Ա����SeDate
{
	year = y;
	month = m;
	day = d;
}
int Date::GetYear()//����ʵ�ֹ��к���GetYear����,��ȡyear����ֵ
{
	return year;
}
int Date::GetMonth()//����ʵ�ֹ��к���GetMonth(),��ȡmonth����ֵ
{
	return month;
}
int Date::GetDay()//����ʵ�ֹ��к���GetDay(),��ȡday����ֵ
{
	return day;
}
void Date::Display()//����ʵ��ִ����ʾ���ܵĹ��г�Ա����Display()
{
	cout << year << "-" << month << "-" << day << endl;
}