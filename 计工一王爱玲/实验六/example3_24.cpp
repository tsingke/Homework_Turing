//li3_24.cpp������Date�ĳ�Ա����Print������Ϊ��Student����Ԫ��Աʾ��
#include<iostream>
#include<string>
using namespace std;
class Student;              	//��ǰ���ã���Ϊ�ں��涨���Date�����õ�Student����
class Date
{   int year, month, day ;     			//���ݳ�ԱĬ��Ϊ��˽������
public :                     			//��һ��Ϊ��ͨ���캯������
    Date( int y=2007 , int m=1 , int d=1 ) ;      
    void Display (const Student &stu );        //��Ա����������ʽ����Ϊ��Student�Ķ�������
};
class Student               	// Student����Date���壬��Date����ǰ������Student����ǰ����
{private:                 	
    char *specialty;
public:
    Student(char  *pSpec);
    ~Student();           
    friend void Date::Display (const Student &);   //��Ϊ������Ԫ��Ա����䣬Date::������
};
Date::Date(int y,int m,int d)  			//��ͨ���캯���Ķ���
{   year = y;
    month = m;
    day = d;
    cout<<"Constructor called.\n";
}
void Date:: Display (const Student  &stu)      //Display��Date�ĳ�Ա������Student�����Ԫ��Ա
{   cout<< stu.specialty <<endl;               //����ʾѧ�������רҵ����
    cout<< year << "-" << month << "-" << day << endl;   //����ʾ���൱ǰ������������
}

Student::Student(char *pSpec)                  //Student��Ĺ��캯������
{   if ( pSpec )
		{	specialty = new char[strlen( pSpec ) + 1];
			strcpy( specialty, pSpec );
		}
    else specialty = 0;
}
Student::~Student( )                           //Student���������������
{  if ( specialty )
   delete [ ]specialty; 
}

int main( )
{   Student zhang("computer");
    Date Birthday( 1990,10,17 );
    Birthday. Display ( zhang );       	      //ͨ��Date�����Birthday���ú���Ҳͬʱ��ʾ����zhang����Ϣ
	return 0;
}
