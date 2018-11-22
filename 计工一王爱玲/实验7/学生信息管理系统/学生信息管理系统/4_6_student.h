#ifndef _STUDENT
#define _STUDENT
#define SIZE 80
#include<iostream>
#include<string>
#include <string.h>
using namespace std;
class Student
{
private:
	string name;
	string ID;
	string number;
	string speciality;
	int age;
	static int count;
	//int count;
public:
	Student();
	Student(string na, string id, string num, string spec, int ag);
	Student(const Student &per);
	~Student();

	string getname()const;
	string getid();
	string getnumber();
	string getspec();
	int getage()const;
	void display()const;//常成员函数
	void input();
	void insert();
	void Delete();
	static int getcount();//静态成员函数只能访问static 静态成员变量；
	//int getcount();
};
#endif