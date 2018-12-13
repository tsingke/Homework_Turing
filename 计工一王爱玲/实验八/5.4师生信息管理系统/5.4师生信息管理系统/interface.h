#pragma warning( disable : 4996)
#ifndef _INTERFACE
#define _INTERFACE
#include"people.h"
const int N = 30;
//Interface
class Interface
{
protected:
	Student stu[N];
	int numstu;
	Graduate gra[N];
	int numgra;
	PostgraduateOnjob postgra[N];
	int numpostgra;
	Teacher tea[N];
	int numtea;



public:
	Interface();
	void display();
	void run();
	void input();
	void output();
};
#endif

