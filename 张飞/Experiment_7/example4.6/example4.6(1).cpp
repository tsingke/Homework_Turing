#include"example4.6.h"
int Student::count = 0;//静态数据成员的初始化
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
	strcpy(speciality, spec);
	age = ag;
	count++;
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
	count++;
}
Student::~Student()
{
	cout << "disCon" << endl;
	if (name)
		delete[]name;
	count--;
}

char* Student::GetName()const
{
	return name;
}
char* Student::GetID()
{
	return ID;
}
int Student::GetAge()const
{
	return age;
}
char* Student::GetSpec()
{
	return speciality;
}
char*Student::GetNumber()
{
	return number;
}
void Student::Display()const
{
	cout << "姓名：" << name << endl;
	cout << "身份证：" << ID << endl;
	cout << "学号：" << number << endl;
	cout << "专业：" << speciality<< endl;
	cout << "年龄：" << age<< endl;
}
void Student::Input()
{
	char na[10];
	cout << "输入姓名：";
	cin >> na;;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "输入身份证：";
	cin >> ID;
	cout << "输入年龄：";
	cin >> age;
	cout << "输入专业：";
	cin >> speciality;
	cout << "输入学号：";
	cin >> number;
	count++;//此句增加，每输入一个，学生总数加1
}
void Student::Insert()//新增
{
	if (!age)//当对象的age成员值为0时，在此调用Insert()函数重新输入对象的值
		Input();
}
void Student::Delete()//新增
{
	age = 0;//只简单的将age置0而不移动数组元素
	count--;
}
int Student::GetCount()//新增静态成员函数，专门用来访问静态数据成员
{
	return count;
}
