//Date2.h��������Date�ඨ��,��Ա�����Ķ������������
#include<iostream>
using namespace std;
class Date
{private:
    int year;
    int month;
    int day;
public:
    void  SetDate(int y, int m , int d)             //�����ݳ�Ա��ʼ���Ĺ��г�Ա����
{   year = y;
   	    month = m;
    	    day = d;
}
int  GetYear( )                         //���г�Ա��������ȡyear����ֵ
{   return year;   
}          
int  GetMonth( )                       //���г�Ա��������ȡmonth����ֵ
{   return month;
}
int  GetDay( )                          //���г�Ա��������ȡday����ֵ
{   return day;
}
void  Display( )	                        //ִ����ʾ���ܵĹ��г�Ա����
{   cout<< year << "-" << month << "-" << day << endl;
}
};                                          //�˷ֺŲ����٣���ʾ�ඨ�����
