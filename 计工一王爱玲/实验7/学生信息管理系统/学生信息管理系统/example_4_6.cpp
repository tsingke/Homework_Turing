#include "4_6_student.h"
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
const int N = 10;
void menu();
void OutputStu(const Student *array);
void InputStu(Student *array);
int  SearchStu(const Student *array, string na);
bool InsertStu(Student *array);
bool DeleteStu(Student *array, string na);
int main()
{
	Student array[N];
	int choice;
	string na;
	do
	{
		menu();
		cout << "please input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <= 5)
			switch (choice)
			{
			case 1:InputStu(array); break;
			case 2:
				cout << "input name searched: " << endl;
				cin >> na;
				int i;
				i = SearchStu(array, na);
				if (i == N)
					cout << "查无此人\n";
				else
					array[i].display();
				break;

			case 3:
				OutputStu(array); break;
			case 4:
				if (InsertStu(array))cout << "成功插入一条记录\n";
				else cout << "插入失败\n";
				break;
			case 5:
				cout << "input the name deleted:\n";
				cin >> na;
				if (DeleteStu(array, na))
					cout << "成功删除\n";
				else cout << "删除失败\n";
			default:break;

			}
	} while (choice);
	system("pause");
	return 0;
}
void menu()
{
	cout << "**********1.录入信息**********\n";
	cout << "**********2.查询信息**********\n";
	cout << "**********3.浏览信息**********\n";
	cout << "**********4.插入信息**********\n";
	cout << "**********5.删除信息**********\n";
	cout << "**********0.退    出**********\n";

}
void OutputStu(const Student *array)
{
	cout << "学生总人数：" << Student::getcount() << endl;
	for (int i = 0; i < N; i++)
	{
		if (array[i].getage())
			array[i].display();
	}
}


int SearchStu(const Student *array, string na)
{
	int  j = N;
	for (int i = 0; i < N; i++)
	{
		if (array[i].getage())
			if (array[i].getname() == na)
			{
				j = i;
				break;
			}
	}
	return j;
}
void InputStu(Student *array)
{
	char ch = '\0';
	int i = 0;
	do
	{
		if (Student::getcount() == N)
			cout << "人数已满，无法继续录入\n";
		if (!array[i].getage())
			array[i++].input();
		cout << "继续录入吗？Y or N" << endl;
		cin >> ch;

	} while (ch == 'Y');

}
bool InsertStu(Student *array)
{
	if (Student::getcount() == N)
	{
		cout << "人数已满，无法插入\n";
		return false;
	}
	for (int i = 0; array[i].getage(); i++)//找到年龄==0的空位置
	{
		array[i].insert();
	}
	return true;
}
bool DeleteStu(Student *array, string na)
{
	if (Student::getcount() == 0)
	{
		cout << "没有记录，无法删除\n";
		return false;
	}
	int i = SearchStu(array, na);
	if (i == N)
	{
		cout << "查无此人，无法删除\n";
		return false;
	}
	array[i].Delete();
	return true;
}