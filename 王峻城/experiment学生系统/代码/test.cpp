#include <iostream>
using namespace std;
#include "student.h"

const int N = 10;
int counts = 0;
void menu()
{
	cout << "1.¼����Ϣ" << endl;
	cout << "2.��ѯ��Ϣ" << endl;
	cout << "3.�����Ϣ" << endl;
	cout << "0.��  ��" << endl;
}
void OutputStu(Student *arr)
{
	cout << "ѧ��������:" << counts << endl;
	for (int i = 0; i < counts; i++)
	{
		arr[i].Display();
	}
}
void InputStu(Student *arr)
{
	char ch;
	do {
		arr[counts].Input();
		counts++;
		cout << "����������?(Y or N)" << endl;
		cin >> ch;
	} while (ch == 'Y');
}
int SearchStu(Student *arr, char *na)
{
	int i, j = N;
	for (i = 0; i < counts; i++)
	{
		if (strcmp(arr[i].GetName(), na) == 0)
			j = i;

	}
	return j;
}

int main()
{
	Student arr[N];
	int choice;
	do {
		menu();
		cout << "����ָ��:";
		cin >> choice;
		if(choice >= 0 && choice <= 3)
			switch (choice)
			{
			case 1:
				InputStu(arr);
				break;
			case 2:
				cout << "����������:";
				char na[20];
				cin >> na;
				int i;
				i = SearchStu(arr, na);
				if (i == N)
					cout << "���޴���!" << endl;
				else
					arr[i].Display();
				break;
			case 3:
				OutputStu(arr);
				break;
			default:
				break;
			}
	} while (choice);
	return 0;
}
