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
					cout << "���޴��ˣ�\n";
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
	cout << "*************1.¼����Ϣ************" << endl;
	cout << "*************2.��ѯ��Ϣ************" << endl;
	cout << "*************3.�����Ϣ************" << endl;
	cout << "*************0.��    ��************" << endl;
}

int counts = 0;
void OutPutStu(Student *array)
{
	cout << "ѧ��������=" << counts << endl;
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
		cout << "����������?Y/N" << endl;
		cin >> ch;
	} while (ch == 'Y');
}
