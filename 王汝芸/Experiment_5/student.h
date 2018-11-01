#pragma once
//学生类的定义
#ifndef _STUDENT //条件编译
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
	char *name;
	char ID[19];//身份证
	char number[10];//学号
	char speciality[20];//专业
	int age;
public:
	Student();//无参构造函数
	Student(char *na, char *id, char*num, char*spec, int ag);//带参构造函数
	Student(const Student &per);//拷贝构造函数
	~Student();
	char* GetName();//提取姓名
	char*GetID();
	char *GetNumber();
	char*GetSpec();
	int GetAge();
	void Display();
	void Input();
};
#endif