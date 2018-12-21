#define _CRT_SECURE_NO_WARNINGS
#include "Graduate.h"

Graduate::Graduate()
{
	name = NULL;
	score = 0;
	teacher = NULL;
}

Graduate::Graduate(const Graduate &Graduate)
{
	if (Graduate.name)
	{
		name = new char[strlen(Graduate.name) + 1];
		strcpy(name, Graduate.name);
	}
	strcpy(number, Graduate.number);
	score = Graduate.score;
	strcpy(speciality, Graduate.speciality);
	if (Graduate.teacher)
	{
		teacher = new char[strlen(Graduate.teacher) + 1];
		strcpy(teacher, Graduate.teacher);
	}
}

Graduate::~Graduate()
{
	if (name)
		delete []name;
	if (teacher)
		delete []teacher;
}

char* Graduate::GetName()
{
	return name;
}

int Getgrade(float x)
{
	int o;
	int t = x / 10;
	switch (t)
	{
	case 9: o = 1; break;
	case 8: o = 2; break;
	case 7: o = 3; break;
	case 6: o = 4; break;
	default: o = 5; break;
	}
	return  o;
}

void Graduate::Input()
{
	char na[10];
	char teac[10];
	cout << "输入姓  名:  ";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "输入学  号： ";
	cin >> number;
	cout << "输入成  绩： ";
	cin >> score;
	grade = Getgrade(score);
	cout << "输入专  业： ";
	cin >> speciality;
	cout << "输入老  师： ";
	cin >> teac;
	if (teacher)
		delete[]teacher;
	teacher = new char[strlen(teac) + 1];
	strcpy(teacher, teac);
}


void Displaygrade(int x)
{
	switch (x)
	{
	case 1:cout << 'A' << endl; break;
	case 2:cout << 'B' << endl; break;
	case 3:cout << 'C' << endl; break;
	case 4:cout << 'D' << endl; break;
	default:cout << 'E' << endl; break;
	}
}

void Graduate::Display(int temp)
{
	switch (temp)
	{
	case 1:cout <<"学  号  为： "<< number << endl; break;
	case 2:cout <<"成  绩  为： "<<score<<endl ; break;
	case 3:cout <<"研究领域为： "<<speciality<<endl ; break;
	case 4:cout <<"指导老师为： "<<teacher<<endl ; break;
	case 5:cout <<"成绩等级为： " << endl; Displaygrade(grade); break;
	default:break;
	}
}

Graduate & Graduate::operator =(const Graduate &gra)
{
	if (name)
		delete []name;
	if (gra.name)
	{
		name = new char[strlen(gra.name) + 1];
		strcpy(name, gra.name);
	}
	strcpy(number, gra.number);
	strcpy(speciality, gra.speciality);
	score = gra.score;
	grade = gra.grade;
	if (teacher)
		delete []teacher;
	if (gra.teacher)
	{
		teacher = new char[strlen(gra.teacher) + 1];
		strcpy(teacher, gra.teacher);
	}
	return *this;
}

void Graduate::Display()
{
	cout << "姓  名  为： " << name << endl;
	cout<<  "学  号  为： " << number << endl;
	cout << "成  绩  为： " << score << endl;
	cout << "研究领域为： " << speciality << endl;
	cout << "指导老师为： " << teacher << endl;
	cout << "成绩等级为： "; 
	Displaygrade(grade);
	cout << endl<< endl;
}

float Graduate::GetScore()
{
	return score;
}