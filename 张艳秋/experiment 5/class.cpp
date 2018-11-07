#pragma warning (disable:4996)
#include"student.h"
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char*num, char*spec, int ag)
{
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

Student::Student(const Student &per)
{
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
		delete []name;
}

char*Student::GetName()
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
char *Student::GetSpec()
{
	return speciality;
}

char*Student::GetNumber()
{
	return number;
}
void Student::Display()
{
	cout << "������" << name << endl;
	cout << "���֤��" << ID << endl;
	cout << "ѧ�ţ�" << number << endl;
	cout << "רҵ��" << speciality << endl;
	cout << "���䣺" << age << endl << endl;
}

void Student::Input()
{
	char na[10];
	cout << "����������";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "�������֤��";
	cin >> ID;
	cout << "��������";
	cin >> age;
	cout << "����רҵ";
	cin >> speciality;
	cout << "����ѧ��";
	cin >> number;
}