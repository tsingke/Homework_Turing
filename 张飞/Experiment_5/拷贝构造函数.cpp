#include<string>
#include<iostream>
#include<Windows.h>
#pragma warning(disable:4996)
using namespace std;
class Student
{
	char *specialty;
public:
	Student(char *pSpec = 0);//���캯������
	~Student();
	void Show();

};
Student::Student(char *pSpec)//���캯���Ķ���
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
		delete[]specialty;//specialty�Ĵ洢�ռ���new��������䣬����delete�ͷ�
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

