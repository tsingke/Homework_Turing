#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include"student.h"


Student::Student() 
{
	name = NULL;
	age = 0;
}




Student::Student(char* na, char* id, char* num, char* spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na)+1];//避免浅拷贝
		strcpy(name,na);
	}
	strcpy(ID,id);
	strcpy(number, num);
	strcpy(speciality, spec);
	age = ag;
}


Student::Student(const Student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name)+1];
		strcpy(name, per.name);
	}	
	strcpy(ID, per.ID);
	strcpy(number, per.number);
	strcpy(speciality, per.speciality);
	age = per.age;
}



Student::~Student()
{
	if (name)
	{
		delete []name;
	}
}



char* Student::getName() 
{
	return name;
}


char* Student::getID() 
{
	return ID;
}


int Student::getAge() 
{
	return age;
}


char* Student::getNumber() 
{
	return number;
}


char* Student::getSpec()
{
	return speciality;
}


void Student::display() 
{
	cout << "姓名：" << name << "  ";
	cout << "年龄：" << age << "  ";
	cout << "身份证号：" << ID << "  ";
	cout << "学号：" << number << "  ";
	cout << "专业：" << speciality << "  ";
	cout << endl;
	
}




void Student::input()
{
	char na[10];
	cout << "请输入学生姓名：";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "请输入学生身份证：";
	cin >> ID;
	cout << "请输入学生年龄：";
	cin >> age;
	cout << "请输入学生专业：";
	cin >> speciality;
	cout << "请输入学生学号：";
	cin >> number;

}


















