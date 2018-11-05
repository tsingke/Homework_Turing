#include"example3_26_student.h"
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1]; //避免浅拷贝
		strcpy_s(name, strlen(na) + 1, na);
	}
	strcpy_s(ID, id);
	strcpy_s(number,10, num);
	strcpy_s(speciality,20, spec);
	age = ag; 
}
Student::Student(const Student &per) //拷贝构造函数，在此例中暂时没有用到
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy_s(name, strlen(per.name) + 1, per.name);
	}
	strcpy_s(ID, 19, per.ID);
	strcpy_s(speciality,20,per.speciality);
	age = per.age;
}
Student::~Student()		//析构函数
{
	if (name)
		delete[]name;
}
char *Student::GetName()	//提取姓名
{
	return name;
}
char *Student::GetID()		//提取身份证
{
	return ID;
}
int Student::GetAge()		//提取年龄
{
	return age;
}
char *Student::GetSpec()	//提取专业
{
	return speciality;
}
char *Student::GetNumber()	//提取学号
{
	return number;
}
void Student::Display()		//输出数据信息
{
	cout << "姓名:"<<name <<endl ;
	cout << "身份证:" << ID << endl;
	cout << "学号:" << number << endl;
	cout << "专业:" << speciality<< endl;
	cout << "年龄:" << age << endl << endl;
}
void Student::Input()		//输入数据
{
	char na[10];
	cout << "输入姓名：";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy_s(name,10, na);
	cout << "输入身份证：";
	cin >> ID;
	cout << "输入年龄：";
	cin >> age;
	cout << "输入专业:";
	cin >> speciality;
	cout << "输入学号：";
	cin >> number;
}