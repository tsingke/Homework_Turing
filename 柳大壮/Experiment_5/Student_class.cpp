#include"student1.h"
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	age = ag;
}

Student::Student(const Student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.number);
	}
	strcpy_s(ID, per.ID);
	strcpy_s(number, per.number);
	strcpy_s(speciality, per.speciality);
	age = per.age;
}
Student::~Student()
{
	if (name)
		delete[]name;
}
char* Student::GetName()
{
	return name;
}
char* Student::GetID()
{
	return ID;
}
char* Student::GetSpec()
{
	return speciality;
}
int Student::Getage()
{
	return age;
}
char* Student::GetNumber()
{
	return number;
}
void Student::Display()
{
	cout << "��  ����" << name << endl;
	cout << "���֤��" << ID << endl;
	cout << "ѧ  �ţ�" << number << endl;
	cout << "ר  ҵ��" << speciality<< endl;
	cout << "��  �䣺" << age << endl << endl;
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
	cout << "�������䣺";
	cin >> age;
	cout << "����רҵ��";
	cin >> speciality;
	cout << "����ѧ�ţ�";
	cin >> number;
}