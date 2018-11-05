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
		name = new char[strlen(na)+1];//����ǳ����
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
	cout << "������" << name << "  ";
	cout << "���䣺" << age << "  ";
	cout << "���֤�ţ�" << ID << "  ";
	cout << "ѧ�ţ�" << number << "  ";
	cout << "רҵ��" << speciality << "  ";
	cout << endl;
	
}




void Student::input()
{
	char na[10];
	cout << "������ѧ��������";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "������ѧ�����֤��";
	cin >> ID;
	cout << "������ѧ�����䣺";
	cin >> age;
	cout << "������ѧ��רҵ��";
	cin >> speciality;
	cout << "������ѧ��ѧ�ţ�";
	cin >> number;

}


















