#include<iostream>
#include<string>
using namespace std;
class Student {
private:
	string name;
	int num;
	
public:
	static int total;
	Student() { total++; }
	~Student() { total--; }
	Student(int n, string p = "\0");
	void getname();
	int getnum();
};
int Student::total=0 ;//全局变量默认初始化为0

Student::Student(int n, string p)
{
	num = n;
	name = p;
	total++;
}
void Student::getname()
{
	cout << name << endl;
}
int Student::getnum()
{
	return num;
}

int main()
{
	cout << "the number of student is " << Student::total<<endl;
	Student *p = new Student(13);
	cout << "the number of student is " << Student::total << endl;
	cout << "the number of student is " << p->total << endl;
	delete p;
	cout << "the number of student is " << Student::total << endl;
	Student s[2];
	cout << "the number of student is " << s[0].total << endl;
	cout << "the number of student is " << s[1].total << endl;
	system("pause");
	return 0;

}