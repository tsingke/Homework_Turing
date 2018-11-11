#define _CRT_SECURE_NO_WARNINGS
#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80

class  Student
{

public:
	Student();
	Student(char* na, char* id, char* num, char* spec, int ag);
	Student(const Student &per);
	~Student();



	char* getName();
	char* getID();
	char* getNumber();
	char* getSpec();
	int getAge();


	void display();
	void input();


private:
	char* name;
	char ID[19];
	char number[10];
	char speciality[20];
	int age;

};
#endif
