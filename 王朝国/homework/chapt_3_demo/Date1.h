//Date1.h��������Date�ඨ��,��Ա�����Ķ������������
#include<iostream>
using namespace std;
class Date
{private:
    int year;
    int month;
    int day;
public:
    void SetDate(int ,int ,int );        	 	//�����ݳ�Ա��ʼ���Ĺ��г�Ա����
    void Display( );                 	   	//ִ����ʾ���ܵĹ��г�Ա����
    int GetYear( );                           //���г�Ա��������ȡyear����ֵ
    int GetMonth( );                         //���г�Ա��������ȡmonth����ֵ
int GetDay( );                           //���г�Ա��������ȡday����ֵ
};                                         //�˷ֺŲ����٣���ʾ�ඨ�����
void Date::SetDate(int y,int m,int d)
{   year=y;
    month=m;
    day=d;
}
int Date::GetYear( )
{   return year;   
}          
int Date::GetMonth( )
{   return month;
}
int Date::GetDay( )
{   return day;
}
void Date::Display()
{   cout << year<< "-" << month << "-" << day << endl;
}
