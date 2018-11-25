#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "example4_06_student.h"
using namespace std;
const int N = 10;
int Student::count = 0;

void menu();
void OutputStu(const Student *array);
void InputStu(Student *array);
int SearchStu(const Student *array, char *na);
bool InsertStu(Student *array);
bool DeleteStu(Student *array, char *na);


int main()
{
	Student array[N];
	int choice;
	char na[20];
	do
	{
		menu();
		cout << "Please input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <= 5)
			switch (choice)
			{
			case 1:InputStu(array); break;
			case 2:cout << "Input the name searched" << endl;
				cin >> na;
				int i;
					i = SearchStu(array, na);
				if (i == N)
					cout << "查无此人！\n";
				else
					array[i].Display();
				break;
			case 3:OutputStu(array); break;
			case 4:if (InsertStu(array))
				cout << "成功插入一条记录\n";
				   else
				cout << "插入失败\n";
				break;
			case 5:
				cout << "Input the name deleted:" << endl;
				cin >> na;
				if (DeleteStu(array, na))
					cout << "成功删除一条记录\n";
				else
					cout << "删除失败!\n";
				break;
			default:break;
			}
	} while (choice);

	system("pause");
	return 0;
}


void menu()
{
	cout << "**********1.录入信息**********" << endl;
	cout << "**********2.查询信息**********" << endl;
	cout << "**********3.浏览信息**********" << endl;
	cout << "**********4.插入信息**********" << endl;
	cout << "**********5.删除信息**********" << endl;
	cout << "**********0.退    出**********" << endl;
}

void OutputStu(const Student *array)               //输出对象数组元素
{
	cout << "学生总人数=" << Student::GetCount() << endl;
	for (int i = 0; i < N; i++)
		if(array[i].GetAge())
			array[i].Display();
}

int SearchStu(const Student *array, char *na)         //按姓名查询
{
	int i, j = N;
	for (i = 0; i < N; i++)
		if(array[i].GetAge())
			if (strcmp(array[i].GetName(), na) == 0)
			{
				j = i;
				break;
			}
	return j;
}

void InputStu(Student *array)                //输入对象数组元素
{
	char ch;
	int i = 0;
	do
	{
		if (Student::GetCount() == N)
			cout << "人数已满，无法继续录入！" << endl;
		if(!array[i].GetAge())
			array[i++].Input();
		cout << "继续输入吗？(Y or N )" << endl;
		cin >> ch;
	} while (ch == 'Y');
}
bool InsertStu(Student *array)
{
	if (Student::GetCount()==N)
	{
		cout << "" << endl;
		return false;
	}
	for (int i = 0; array[i].GetAge(); i++) 
		array[i].Insert();
	return true;
}
bool DeleteStu(Student *array, char *na)
{
	if (Student::GetCount()==0)
	{
		cout << "没有记录，无法删除！" << endl;
		return false;
	}
	int i = SearchStu(array, na);
	if (i==N)
	{
		cout << "查无此人，无法删除！\n";
		return false;
	}
	array[i].Delete();
	return true;
}
