#pragma once


#include <iostream>
#include <string>

using namespace std;

class Student {
	char *name;
	char ID[19];
	char number[10];
	char speciality[20];
	int age;
public:
	Student();
	Student(char *na, char *id, char *num, char *spec, int ag);
	Student(const Student &per);
	~Student();
	char *getName();
	char *getID();
	char *getNumber();
	char *getSpec();
	int getAge();
	void display();
	void input();
};

Student::Student() {
	name = NULL;
	age = 0;
}

Student::Student(char *na, char *id, char *num, char *spec, int ag) {
	if (na) 
	{
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spec);
	age = ag;
}

Student::Student(const Student &per) {
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
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
		delete[]name;
}

char * Student::getName() 
{
	return name;
}

char * Student::getID() 
{
	return ID;
}

int Student::getAge() 
{
	return age;
}

char * Student::getSpec()
{
	return speciality;
}

char * Student::getNumber() 
{
	return number;
}



void Student::display() {
	cout << "��  ��:" << name << endl;
	cout << "���֤:" << ID << endl;
	cout << "ѧ  ��:" << number << endl;
	cout << "ר  ҵ:" << speciality << endl;
	cout << "��  ��:" << age << endl;
}

void Student::input() {
	char na[10];
	cout << "������  ��:" << endl;
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "�������֤:" << endl;
	cin >> ID;
	cout << "������  ��:" << endl;
	cin >> age;
	cout << "����ר  ҵ:" << endl;
	cin >> speciality;
	cout << "����ѧ  ��:" << endl;
	cin >> number;

}
