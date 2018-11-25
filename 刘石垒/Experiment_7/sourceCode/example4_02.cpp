#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Student
{
private:
	static int total;
	int num;
	char name[20];

public:
	Student() { total++; }
	~Student() { total--; }
	Student(int n,const  char *p = "Wang");
	void GetName();
	int GetNum();
	static void Print();
};

int Student::total = 0;

Student::Student(int n, const char *p)
{
	num = n;
	strcpy(name, p);
	total++;
}
void Student::GetName()
{
	cout << name << endl;
}
int Student::GetNum()
{
	return num;
}
void Student::Print()
{
	cout << "The name of all students: " << total << endl;
}

int main()
{
	Student::Print();
	Student *p = new Student(13);
	Student::Print();
	p->Print();
	delete p;
	//Student::Print();//思考一：改成p->Print();
	Student s[2];
	s[0].Print();
	s[1].Print();
	//思考二：以上两行都改成Student::Print();

	system("pause");
	return 0;
}