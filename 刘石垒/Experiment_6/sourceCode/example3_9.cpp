//li3_9.cpp�����캯��Ӧ�þ���
#include<iostream>
using namespace std;
class Date
{private:
    int year,  month,  day;
public:
    Date(int=2006 , int=10 , int=17 );                   		//���캯��ԭ������
    void Display( );
};	
Date::Date(int y, int m, int d )               		//��������ʵ�ֹ��캯������ǰ�����������
{   cout<<"Executing constructor��\n";  	//�˾�Ϊ�����������������䣬��������
//���캯����ϵͳ�Զ�����
    year = y;                                    //��ɶ����ݳ�Ա�ĳ�ʼ��
    month = m;
    day = d;
}
void Date::Display()
{   cout<< year << "-" << month << "-" << day << endl;  
}
int main()
{   Date today;//(2006,10,17);              		//�������ͬʱ��ɶ���ĳ�ʼ��
    cout<<"Today is:";
    today.Display();
    return 0;
}
