#include "4_6_student.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int Student::count = 0;
Student::Student()
{
	name = "\0";
	age = 0;

}
Student::Student(string na, string id, string num, string spec, int ag)
{
	name = na;
	ID = id;
	number = num; 
	speciality = spec;
	age = ag;
	count++;
}

Student::Student(const Student &per)
{
	name = per.name;
	ID = per.ID;
	number = per.number;
	speciality = per.speciality;
	age = per.age;
	count++;

}
Student::~Student()
{
	cout << "discon\n";
	if(name=="\0")
	count--;
}


string Student::getname()const
{
	return name;
}
string Student::getid()
{
	return ID;
}
string Student::getnumber()
{
	return number;
}
string Student::getspec()
{
	return speciality;
}
int Student::getage()const
{
	return age;
}
void Student::display()const//常成员函数
{
	cout << "姓 名" << name << endl;
	cout << "身份证" << ID << endl;
	cout << "学 号" << number << endl;
	cout << "专 业" << speciality<< endl;
	cout << "年 龄" << age << endl;

}

void Student::input()
{
	string na;
	cout << "输入姓名";
	cin >>na;
	name = na;
	cout << "输入身份证";
	cin >> ID;
	cout << "学号";
	cin >> number;
	cout << "专业";
	cin >> speciality;
	cout << "年龄";
	cin >> age;
	count++;

}
void Student::insert()
{
	if (!age)
	{
		input();
	}
}
void Student::Delete()
{
	age = 0;
	count--;
}
int Student::getcount()
{
	return count;
}