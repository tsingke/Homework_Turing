#pragma warning( disable : 4996)
#ifndef _PEOPLE
#define _PEOPLE
#include<iostream>
#include<string.h>
using namespace std;
//Date类
class Date
{
protected:
	int year, month, day;
public:
	void set(int y, int m, int d);
	int getyear();
	int getmonth();
	int getday();
};
//Person
class Person
{
protected:
	char name[20];
	char number[20];
	char sex;
	Date birthday;
public:
	Person();
	void input();
	void output();
	char *getname();
};
//Student
class Student:virtual public Person
{
protected:
	char speciality[20];
public:
	void input();
	void output();
};
//Graduate
class Graduate:virtual public Student
{
protected:
	char researchtopic[60];//研究课题
public:
	void input();
	void output();
};
//Teacher
class Teacher :virtual public Person
{
protected:
	char academictitle[20];//教师职称
public:
	void input();
	void output();
};
//PostgraduateOnjob
class PostgraduateOnjob :public Graduate,public Teacher
{
public:
	void input();
	void output();

};
#endif 

