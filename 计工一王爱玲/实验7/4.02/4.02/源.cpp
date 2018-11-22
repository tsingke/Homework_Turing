#include<iostream>
#include<string>
using namespace std;
class Student {
private:
	string name;
	int num;
    static int total;
public:
	Student() { total++; }
	~Student() { total--; }
	Student(int n, string p = "\0");
	void getname();
	int getnum();
	static void print();
};
int Student::total = 0;//全局变量默认初始化为0

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
void Student::print()
{
	cout <<"the number of all student is "<< total<<endl;
}
int main()
{
	Student::print();
	Student *p = new Student(13);
	Student::print();
	p->print();
	delete p;
	/*delete p;
	cout << "1\n";
	p->print(); */
	
	Student::print();
	Student s[2];
	s[0].print();
	s[1].print();
	system("pause");
	return 0;

}