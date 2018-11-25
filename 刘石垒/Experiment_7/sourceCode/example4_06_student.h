#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
	char *name;                   
	char ID[19];                     
	char number[10];                
	char speciality[20];              
	int age;                  
	static int count;
public:
	Student();                         //无参构造函数
	Student(char *na, char *id, char *num, char * spec, int ag);
	Student(const Student &per);          //拷贝构造函数
	~Student();                        //析构函数
	char* GetName()const;                   //提取姓名
	char* GetID();                      //提取身份证
	char* GetNumber();                 //提取学号
	char* GetSpec();                    //提取专业
	int GetAge()const;                       //提取年龄
	void Display()const;                      //显示学生信息
	void Input();                        //输入学生信息
	void Insert();
	void Delete();
	static int GetCount();
};
#endif
