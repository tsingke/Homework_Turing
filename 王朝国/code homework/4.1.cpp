#include <iostream>
#include<windows.h>
using namespace std;
class Student
{
private:
	int num;
	char name[20];
public:
	static int total;
	Student() { total++; }
	~Student() { total--; }
	Student(int n, char *p = "wang")
		void GetName();
	int Getnum();
};
int Student::total ；            //静态成员的初始化
Student::Student(int n, char *p)
{
	num = n;
	strcpy(name, p);
	total++;
}
void Student::GetName()
{
	cout << name << endl;
}
int Student::Getnum()
{
	return num;
}
int main()
{
	cout << "The number of all students: " << Student::total << endl;//无对象时可用类名：：静态成员名形式访问
	Student *p = new Student(13);//用指针申请动态空间并得到对象*p
	cout << "The number of all Students: " << Student::total << endl;//用类名：：静态成员名形式访问
	cout << "The number of all Students: " << p->total << endl;//用指针所指向的对象去访问
	delete p;
	cout << "The number of all student：" << Student::total << endl;//用类名：：静态成员名形式去访问
	Student s[2];
	//定义两个对象，构造函数调用两次
	cout << "The number of all student: " << s[0].total << endl;//这两行输出结果一定相同
	cout << "The number of all student: " << s[1].total << endl;
	system("pause")；
		return 0;
}
