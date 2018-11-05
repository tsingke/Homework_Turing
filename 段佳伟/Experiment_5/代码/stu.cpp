#include "student.h"
Student::Student() {
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char *num, char *spec, int ag) {
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	strcpy(number, num);
	strcpy(ID, id);
	strcpy(speciality, spec);
	age = ag;
}
Student::Student(const Student &stu) {
	if (stu.name) {
		name = new char[strlen(name) + 1];
		strcpy(name, stu.name);
	}
	strcpy(number, stu.number);
	strcpy(ID, stu.ID);
	strcpy(speciality, stu.speciality);
	age = stu.age;
}
Student::~Student() {
	if (name) {
		delete[] name;
	}
}
char* Student::getname() {
	return name;
}
char* Student::getid() {
	return ID;
}
char* Student::getnumber() {
	return number;
}
char* Student::getspec() {
	return speciality;
}
int Student::getage() {
	return age;
}
void Student::display() {
	cout << "***********& MESSAGE & ************" << endl;
	cout << "my   name     is " << name << endl;
	cout << "my    id      is" << ID << endl;
	cout << "my   number   is" << number << endl;
	cout << "my speciality is" << speciality << endl;
	cout << "my     age    is  " << age << endl;
	cout << "*************& END & **************" << endl;
}
void Student::input() {
	char na[10];
	cout << "please input your name：" ;
	cin >> na;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	if (name)
		delete[]name;
	cout << "please input your ID；";
	cin >> ID;
	cout << "please input your number；";
	cin >> number;
	cout << "please input your speciality ；";
	cin >> speciality;
	cout << "please input your age；";
	cin >> age;
}
