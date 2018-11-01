#include "example3_26_student.h"

Student::Student()
{
	name = NULL;
	age = 0;
}

Student::Student(char *na, char *id, char *num, char * spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	strcpy_s(ID, id);
	strcpy_s(number, num);
	strcpy_s(speciality, spec);
	age = ag;
}

Student::Student(const Student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy_s(ID, per.ID);
	strcpy_s(number, per.number);
	strcpy_s(speciality, per.speciality);
	age = per.age;
}

Student::~Student()
{
	if (name)
	{
		delete []name;
	}
}

char* Student::GetName()
{
	return name;
}

char* Student::GetID()
{
	return ID;
}

int Student::GetAge()
{
	return age;
}

char* Student::GetSpec()
{
	return speciality;
}

char* Student::GetNumber()
{
	return number;
}

void Student::Display()
{
	cout << "姓  名 ： " << name << endl;
	cout << "身份证 ： " << ID << endl;
	cout << "学  号 ： " << number << endl;
	cout << "专  业 ： " << speciality << endl;
	cout << "年  龄 ： " << age<<endl << endl;
}

void Student::Input()
{
	char na[10];
	cout << "输入姓  名 ： ";
	cin >> na;
	if (name)
	{
		delete[]name;
	}
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "输入身份证 ： ";
	cin >> ID;
	cout << "输入年  龄 ： ";
	cin >> age;
    cout << "输入专  业 ： ";
	cin >> speciality;
	cout << "输入学  号 ： ";
	cin >> number;
}