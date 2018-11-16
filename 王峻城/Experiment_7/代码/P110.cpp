#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
	int age;
	string name;
public:
	Person(int n=1, string na="Zhuli");
	~Person();
	void Print();
	//void Print() const;
	void ModifyAge();
};
Person::Person(int n, string na)
{
	age = n;
	name = na;
}
Person::~Person()
{
	
}
void Person::Print()
{
	cout << "age:" << age << " name: " << name << endl;
	cout << "This is general Print()." << endl;
}
//void Person::Print() const
//{
//	cout << "age:" << age << " name: " << name << endl;
//	cout << "This is const Print()." << endl;
//}
void Person::ModifyAge()
{
	age++;
}
int main()
{
	const Person p1(17,"wu");
	cout << "Output const object p1" << endl;
	p1.Print();
	Person p2(18, "zhang");
	cout << "Output generalobject p2" << endl;
	p2.ModifyAge();
	p2.Print();
	system("pause");
	return 0;
}