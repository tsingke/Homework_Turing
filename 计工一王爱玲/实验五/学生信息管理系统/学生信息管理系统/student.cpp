#define _CRT_SECURE_NO_WARNINGS
#include"3_26_student.h"
#include<string.h>
student::student()
{
	name = NULL;
	age = 0;
}
student::student(char* na, char* id, char *num, char *spec, int ag)
{
	if (na)
	{
		na = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spec);
	age = ag;
}
student::student(const student &p)
{
	if (p.name)
	{
		name = new char[strlen(p.name) + 1];
		strcpy(name, p.name);

	}
	strcpy(ID, p.ID);
	strcpy(number, p.number);
	strcpy(speciality, p.speciality);
	age = p.age;
}
student::~student()
{
	if (name)
		delete[]name;
}
char * student::getname()
{
	return name;
}
char *student::getid()
{
	return ID;
}
char * student::getspeciality()
{
	return speciality;
}
int student::getage()
{
	return age;
}
void student::Input()
{
	char na[10];
	cout << "输入姓名：";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "输入身份证";
	cin >> ID;
	cout << "输入学号";
	cin >> number;
	cout << "输入专业";
	cin >> speciality;
	cout << "输入年龄";
	cin >> age;
}
void student::display()
{
	cout << "姓名：" << name<<endl;
	cout << "身份证:" << ID << endl;
	cout << "学号：" << number << endl;
	cout << "专业：" << speciality << endl;
	cout << "年龄：" << age << endl;
}