#include "student.h"
student::student()
{
}
student::student(char *na,char *ID,char *num,char *spec,int ag)
{
	strcpy(name, na);
	strcpy(id, ID);
	strcpy(number, num);
	strcpy(specialty, spec);
	age = ag;
}
student::student(const student &per)
{
	strcpy(name, per.name);
	strcpy(id, per.id);
	strcpy(number, per.number);
	strcpy(specialty, per.specialty);
	age = per.age;
}
student::~student()
{

}
char *student::getname()
{
	return name;
}
char *student::getid()
{
	return id;
}
char *student::getnumber()
{
	return number;
}
char *student::getspecialty()
{
	return specialty;
}
int student::getage()
{
	return age;
}
void student::input()
{
	cout << "����������";
	cin >> name;
	cout << "���������֤��";
	cin >> id;
	cout << "����������";
	cin >> age;
	cout << "������רҵ";
	cin >> specialty;
	cout << "������ѧ��";
	cin >> number;
}
void student::display()
{
	cout << "����:" << name << endl;
	cout << "���֤�ţ�" << id << endl;
	cout << "���䣺" << age << endl;
	cout << "רҵ��" << specialty << endl;
	cout << "ѧ�ţ�" << number << endl;
}