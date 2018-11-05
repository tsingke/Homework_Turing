#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student {

	char* name;
	char ID[19];
	char number[10];
	char speciality[20];
	int age;
public:
	Student();
	Student(char *na, char *id, char *num, char *spec, int ag);
	Student(const Student &stu);
	~Student();
	char *getname();
	char *getid();
	char *getnumber();
	char *getspec();
	int getage();
	void display();
	void input();
};
#endif

