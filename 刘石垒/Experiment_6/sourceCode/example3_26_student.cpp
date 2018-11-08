//example3_26_student.cpp��ѧ�����ʵ��
#include "example3_26_student.h"
Student::Student()
{
	   name=NULL;
	   age=0;
}
//���캯��
Student::Student( char *na , char *id , char *num , char * spec ,int ag)
{	if(na)
	{ 
		name=new char[strlen(na)+1];       //����ǳ����
		strcpy(name,na);
	 }
    strcpy(ID, id);
	strcpy(number,num);
	strcpy(speciality, spec);
	age=ag;
}

Student::Student(const Student &per)           //�������캯�����ڴ�������ʱû���õ�
{
	if(per.name)
	{
		name=new char[strlen(per.name)+1];
		strcpy(name,per.name);
	}
	strcpy(ID, per.ID);
	strcpy(number,per.number);
	strcpy(speciality, per.speciality);
	age=per.age;
}
	
Student::~Student()                         //��������
{
	if (name)
		delete []name;
}
   
char* Student:: GetName()                   //��ȡ����
{
	return name;
}
char* Student::GetID()                      //��ȡ���֤
{  
	return ID;
}
int Student::GetAge()                       //��ȡ����
{  
	return age;
}
char* Student::GetSpec()                    //��ȡרҵ
{
	return speciality;
}
char* Student::GetNumber()                 //��ȡѧ��
{
	return number;
}
void Student::Display()                    //���������Ϣ
{
	cout<<"��  ����"<<name<<endl;
	cout<<"���֤��"<<ID<<endl;
	cout<<"ѧ  �ţ�"<<number<<endl;
	cout<<"ר  ҵ��"<<speciality<<endl;	
	cout<<"��  �䣺"<<age<<endl<<endl;
}
void Student::Input()                      //��������
{
	char na[10];
	cout<<"������  ����";
	cin>>na ;
	if(name)
		delete []name;            
	name=new char[ strlen(na)+1];
	strcpy( name, na );
	cout<<"�������֤��";
	   cin>>ID ;
	cout<<"������  �䣺";
	   cin>>age; 
	cout<<"����ר  ҵ��";
	   cin>>speciality ;
	cout<<"����ѧ  �ţ�";
	   cin>>number;	   
}
