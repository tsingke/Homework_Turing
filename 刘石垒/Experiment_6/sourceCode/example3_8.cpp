//li3_8.cpp�ļ���thisָ��ʹ��ʾ��
#include<iostream>
using namespace std;
class Date
{
private:
	int year, month, day;
public:
	void  SetDate(int y,  int m,  int d);
    void  Display( );
};
void Date:: SetDate(int y,  int m,  int d)
{   
	year=y;
    month=m;
    day=d;
}
void Date:: SetDate(int y,  int m,  int d)
{   
	this->year=y;
    this->month=m;
    this->day=d;
}
/*
void Date::Display( )
{   cout<<"���øú����Ķ����thisָ����";
    cout<<this<<endl;                             	//�����ǰ��������ĵ�ַ     
    cout<<"��ǰ����year��Ա����ʼ��ַ: ";         	//�����ǰ�����year��Ա�ĵ�ַ
    cout<<&this->year<<endl;
    cout<<"��ǰ����month��Ա����ʼ��ַ: ";        	//�����ǰ�����month��Ա�ĵ�ַ
    cout<<&this->month<<endl;
    cout<<"year="<<this->year<<" ,month="<<this->month<<endl;  //���this��ָ��������ݳ�Աֵ
}
*/

void Date::Display( )
{   
	cout<<"���øú����Ķ����thisָ����";
    cout<<this<<endl;                             	//�����ǰ��������ĵ�ַ     
    cout<<"��ǰ����year��Ա����ʼ��ַ: ";         	//�����ǰ�����year��Ա�ĵ�ַ
    cout<<&year<<endl;
    cout<<"��ǰ����month��Ա����ʼ��ַ: ";        	//�����ǰ�����month��Ա�ĵ�ַ
    cout<<&month<<endl;
    cout<<"year="<<year<<" ,month="<<month<<endl;  //���this��ָ��������ݳ�Աֵ
}
int main()
{   
	Date DateA , DateB;
    DateA.SetDate(2011,7,24);
    DateB.SetDate(2010,10,1);    //������������
    cout<<"DateA��ַ:"<<&DateA<<endl ;              //�������DateA�ĵ�ַ     
    DateA.Display();
    cout<<"DateB��ַ:"<<&DateB<<endl ;              	//�������DateB�ĵ�ַ  
    DateB.Display();
	return 0;
}
