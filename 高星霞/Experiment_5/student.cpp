#include"student.h"
Student::Student()//定义无参构造函数
{
	name = NULL;
	age = 0;

}
Student::Student(char *na, char *id, char *num, char*spec, int ag)//定义带参构造函数
{
	if (na)
	{
		name = new char[strlen(na) + 1];//避免浅拷贝
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spec);
	age = ag;
}
Student::Student(const Student &per)//定义拷贝构造函数
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
Student::~Student()//定义析构函数
{
	if (name)
		delete[]name;

}
char*Student::GetName()//提取姓名
{
	return name;
}
char*Student::GetID()//提取身份证
{
	return ID;

}
char*Student::GetNumber()//提取学号
{
	return number;
}
char*Student::GetSpec()//提取专业
{
	return speciality;
}
int Student::GetAge()//提取年龄
{
	return age;
}
void Student::Display()//输出数据信息
{
	cout << "姓名:" << name << endl;
	cout << "身份证:" << ID << endl;
	cout << "学号:" << number << endl;
	cout << "专业:" << speciality << endl;
	cout << "年龄:" << age << endl << endl;
}
void  Student::Input()//输入数据
{
	char na[10];
	cout << "输入姓名:";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "输入身份证:";
	cin >> ID;
	cout << "输入年龄:";
	cin >> age;
	cout << "输入专业:";
	cin >> speciality;
	cout << "输入学号:";
	cin >> number;


}
