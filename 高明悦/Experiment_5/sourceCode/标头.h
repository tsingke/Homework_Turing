#pragma once
#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
#define SIZE 20
class Student
{
	char *name;
	char ID[19];
	char number[10];
	char speciality[20];
	int age;
public:
	Student();
	Student(char *na, char *id, char *num, char *spec, int ag);
	Student(const Student &per);
	~Student();
	char* GetName();
	char* GetID();
	char* GetNumber();
	char* Getspec();
	int Getage();
	void Display();
	void Input();
};
#endif
