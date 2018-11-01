#include<string>
#include<iostream>
#include<Windows.h>
#pragma warning(disable:4996)
using namespace std;
class Student
{
	char *specialty;
public:
	Student(char *pSpec = 0);//构造函数声明
	~Student();
	void Show();

};
Student::Student(char *pSpec)//构造函数的定义
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy(specialty, pSpec);
	}
	else specialty = 0;
}
Student::~Student()
{
	if (specialty)
		delete[]specialty;//specialty的存储空间有new运算符分配，需用delete释放
}
void Student::Show()
{
	cout << "specialty=" << specialty << '\n';
}
int main()
{
	Student zhang("computer");
	Student wang(zhang);
	zhang.Show();
	wang.Show();
	system("pause");
	return 0;
}

