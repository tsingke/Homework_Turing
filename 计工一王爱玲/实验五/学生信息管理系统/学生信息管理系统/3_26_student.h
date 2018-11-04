#pragma once
#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class student
{
private:
	char *name;
	char ID[20];
	char number[20];
	char speciality[20];
	int age;
public:
	student();
	student(char *na, char *id, char *num, char *spec, int ag);
	student(const student &p);
	~student();
	char * getname();
	char *getid();
	char *getspeciality();
	int getage();
	void Input();
	void display();
};


#endif
