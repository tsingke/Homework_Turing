#include<iostream>
const int N = 10;
using namespace std;
extern int num1;
class student
{
private:
	char name[10];
	char id[20];
	int age;
	char specialty[20];
	char number[20];
public:
	student();
	student(char *na, char *id, char *num, char *spec, int age);
	student(const student &per);
	~student();
	char *getname();
	char *getid();
	char *getnumber();
	char *getspecialty();
	int getage();
	void input();
	void display();
};

