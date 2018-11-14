
#include"student3_26.h"
#include"string.h"

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
	strcpy(specialty, spec);
	age = ag;
}
Student::~Student()
{
	if (name)
		delete[]name;
}
char *Student::GetName()
{
	return ID;
}
int Student::GetAge()
{
	return age;
}
char* Student::GetSpec()
{
	return specialty;
}
char* Student::GetNumber()
{
	return number;
}
void Student::Display()
{
	cout << "������" << name << endl;
	cout << "���֤:" << ID << endl;
	cout << "ѧ��:" << number << endl;
	cout << "רҵ:" << specialty << endl;
	cout << "����:" << age << endl;
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
	cin >> specialty;
	cout << "����ѧ�ţ�";
	cin >> number;
}