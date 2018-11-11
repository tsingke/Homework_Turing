#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"student.h"

const int N = 10;
void menu();
void OutPutStu(Student *array);
void InPutStu(Student *array);
int SearchStu(Student *array, char *na);

int main()
{
	Student array[N];
	int choice;
	do
	{
		menu();
		cout << "please input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <= 3)
		{
			switch (choice)
			{
			case 1:InPutStu(array); break;
			case 2:cout << "Input the name searched" << endl;
				char na[20];
				cin >> na;
				int i;
				i = SearchStu(array, na);
				if (i == N)
					cout << "查无此人！\n";
				else
					array[i].display();
				break;
			case 3:
				OutPutStu(array); break;
			default:break;
			}

		}
	} while (choice);
	system("pause");
	return 0;
}





void menu()
{
	cout << "*************1.录入信息************" << endl;
	cout << "*************2.查询信息************" << endl;
	cout << "*************3.浏览信息************" << endl;
	cout << "*************0.退    出************" << endl;
}

int counts = 0;
void OutPutStu(Student *array)
{
	cout << "学生总人数=" << counts << endl;
	for (int i = 0; i < counts; i++)
	{
		array[i].display();
	}
}


int SearchStu(Student *array, char *na)
{
	int i, j = N;
	for (i = 0; i < counts; i++)
	{
		if (strcmp(array[i].getName(), na) == 0)
		{
			j = i;
		}
	}
	return j;
}

void InPutStu(Student *array)
{
	char ch;
	do
	{
		array[counts].input();
		counts++;
		cout << "继续输入吗?Y/N" << endl;
		cin >> ch;
	} while (ch == 'Y');
}
