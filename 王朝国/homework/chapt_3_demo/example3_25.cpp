//li3_25.cpp����Ԫ���Ӧ�ã�������Student����ΪDate����Ԫ��
#include<iostream>
#include<string>
using namespace std;
class Student;               		//��ǰ���ã���Ϊ�ں��涨���Date�����õ�Student����
class Date                 		//�ڱ����ж�Date�����˲����޸ģ�ʹ֮�򵥻�
{   int year, month, day;
public:
    Date(int , int , int );  
    void Display ();
    friend Student;         		//��Student��ΪDate����Ԫ��
};	
class Student  
{private:
    char *specialty;
char *name;
public:
    Student(char *pn, char *pSpec);
    ~Student();
    void Display (Date &);      		//��Student�����г�Ա��������ֱ�ӷ�����Date�����г�Ա
};
Date::Date(int y,int m,int d):year(y),month(m),day(d)
{   }
void Date:: Display ( )
{   cout<<year<<"-"<<month<<"-"<<day<<endl;    
}
Student::Student(char *pn, char *pSpec)
{   if(pSpec)
	{	specialty=new char[ strlen( pSpec ) + 1];
		strcpy( specialty, pSpec );
	}
     else  specialty = 0;
	 if ( pn )
	{	name = new char[ strlen( pn ) + 1];
		strcpy(name, pn);
	}
     else  name = 0;
}
Student::~Student()
{   if  ( specialty ) delete [ ]specialty; 
    if( name ) delete [ ]name; 
}
void Student:: Display ( Date& obj )  		    // Student::Print( )��ֱ�ӷ���Date�������г�Ա         
{   cout<<name<<endl;
	   cout<<specialty<<endl;      		//��������������ݳ�Ա
    obj. Display () ;             		    //����������Ԫ�����������ĳ�Ա����
    cout<<"Date's another format is:";
    cout<<obj.month<<"_"<<obj.day<<"_"<<obj.year<<endl;
                         		    //ֱ�ӵ���������Ԫ������������˽�����ݳ�Ա
}
int main()
{   Student boy( "zhang",  "computer" );      	//����Student�����
    Date birthday(1990,10,17);  		     //����Date�����   
    boy. Display ( birthday ) ;       		     //��ʾ����boy��birthday��Ϣ
return 0;
}
