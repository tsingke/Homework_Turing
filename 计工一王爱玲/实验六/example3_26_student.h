  // example3_26_student.h:ѧ����Ķ���
#ifndef _STUDENT                //��������
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
		char *name;                     //����
		char ID[19];                     //���֤
		char number[10];                 //ѧ��
		char speciality[20];                //רҵ
		int age;                         //����
public:
		Student();                         //�޲ι��캯��
		Student( char *na , char *id , char *num , char * spec ,int ag);  //���ι��캯��
		Student(const Student &per);          //�������캯��
		~Student();                        //��������
     char* GetName();                   //��ȡ����
	char* GetID();                      //��ȡ���֤
	char* GetNumber();                 //��ȡѧ��
	char* GetSpec();                    //��ȡרҵ
     int GetAge();                       //��ȡ����
	    void Display();                      //��ʾѧ����Ϣ
	    void Input();                        //����ѧ����Ϣ
                      
};
#endif
