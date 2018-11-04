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
	cout << "����������";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "�������֤";
	cin >> ID;
	cout << "����ѧ��";
	cin >> number;
	cout << "����רҵ";
	cin >> speciality;
	cout << "��������";
	cin >> age;
}
void student::display()
{
	cout << "������" << name<<endl;
	cout << "���֤:" << ID << endl;
	cout << "ѧ�ţ�" << number << endl;
	cout << "רҵ��" << speciality << endl;
	cout << "���䣺" << age << endl;
}