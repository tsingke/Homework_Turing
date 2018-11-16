//#include <iostream>
//#include <cstring>
//#pragma warning(disable:4996)
//using namespace std;
//class Student
//{
//private:
//	int num;
//	char name[20];
//public:
//	static int total;
//	Student();
//	~Student();
//	Student(int n, char* p = "Wang");
//	void GetName();
//	int Getnum();
//};
//int Student::total;
//Student::Student(int n, char* p)
//{
//	num = n;
//	strcpy(name, p);
//	total++;
//}
//Student::Student()
//{
//	total++;
//}
//Student::~Student()
//{
//	total--;
//}
//void Student::GetName()
//{
//	cout << name << endl;
//}
//int Student::Getnum()
//{
//	return num;
//}
//int main()
//{
//	cout << "The number of all students: " << Student::total << endl;
//	Student *p = new Student(13);
//	cout << "The number of all students: " << Student::total << endl;
//	cout << "The number of all students: " << p->total << endl;
//	delete p;
//	cout << "The number of all students: " << Student::total << endl;
//	Student s[2];
//	cout << "The number of all students: " <<s[0].total << endl;
//	cout << "The number of all students: " << s[1].total << endl;
//	system("pause");
//	return 0;
//}