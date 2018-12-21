#pragma once
#ifndef _GRADUATE
#define _GRADUATE
#include <iostream>
#include <string>
using namespace std;
#define SIZE 80
class Graduate
{
	char *name;
	char number[16];
	float score;
	char speciality[20];
	char *teacher;
	int grade;
public:
	Graduate();
	Graduate(const Graduate &Graduate);
	~Graduate();
	void Input();
	void Display(int temp);
	char* GetName();
	friend int Getgrade(float x);
	Graduate & operator =(const Graduate &gra);
	void Display();
	float GetScore();
	friend void Displaygrade(int x);
};

#endif