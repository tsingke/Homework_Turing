#include<string>
#include<iostream>
#include<windows.h>
using namespace std;
class Student
{
	char *specialty;
public:
	Student(char *pSpec = 0);//构造函数声明
	~Student();
	void Show();
};
Student::Student(char *pSpec)
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
		delete[]specialty;
}
void Student::Show()
{
	cout << "speciality=" << specialty << '\n';
}
int main()
{
	Student zhang("computer");
	Student wang(zhang);
	zhang.Show();
	wang.Show;
	system("pause");
	return 0;
}