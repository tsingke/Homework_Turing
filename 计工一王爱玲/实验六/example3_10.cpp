
/*---------------------------------------------------------*
 //example_3_10.cpp����Ĭ�ϲ����Ĺ��캯����Ӧ�þ���
*---------------------------------------------------------*/
#include<iostream>
using namespace std;

class Date
{
private:
    int year, month, day ;
public:
    Date(int y=2000, int m=1, int d=1 );   		    //���캯���������ṩĬ�ϲ���ֵ
    void Display();
};	

Date::Date(int y , int m , int d)             		//��������ʱ�ײ��������ṩĬ�ϲ���ֵ
{   cout<<"Executing constructor��"<<endl;
    year = y;
    month = m;
    day = d;
}

void Date::Display()
{   cout<< year << "-" << month << "-" << day << endl;
}

int main()
{    
	Date initiateday;                  		//1.ȫ�����ù���������Ĭ���β�ֵ
    Date newday(2006);               		//2.�ṩһ��ʵ�ʲ�����������������Ĭ���β�ֵ
    Date today(2006,10,17);            		//3.�ṩ3��ʵ�ʲ�����������Ĭ���β�ֵ
	
    cout<<"Initiateday is:";
    initiateday.Display();
    cout<<"Newday is:";
    newday.Display();
    cout<<"Today is:";
    today.Display();
	return 0;
}
