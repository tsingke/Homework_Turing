#include <iostream>
#include <string>
using namespace std;
class Student
{
	int age;
	char *name;
public:
	Student(int m, char *n)
	{
		age = m;
		name = new char[strlen(n) + 1];
		strcpy_s(name,20,n);
	}
	friend void disp(Student&); //将函数disp()声明为自己的友元函数
	~Student()
	{
		cout << "delete it." << name << endl;
		delete[]name;
	}

};

void disp(Student &p)
{
	cout << "Student's name is " << p.name << ",age is" << p.age << endl;
}
int main()
{
	Student A(18, "wujiang");
	Student B(19, "xiayu");
	disp(A);
	disp(B);
	system("pause");
	return 0;
}