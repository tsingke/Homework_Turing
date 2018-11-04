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
	cout << "请输入姓名";
	cin >> name;
	cout << "请输入身份证号";
	cin >> id;
	cout << "请输入年龄";
	cin >> age;
	cout << "请输入专业";
	cin >> specialty;
	cout << "请输入学号";
	cin >> number;
}
void student::display()
{
	cout << "姓名:" << name << endl;
	cout << "身份证号：" << id << endl;
	cout << "年龄：" << age << endl;
	cout << "专业：" << specialty << endl;
	cout << "学号：" << number << endl;
}