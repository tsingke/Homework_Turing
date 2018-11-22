#include<iostream>
#include<Windows.h>
using namespace std;
#include"example4.6.h"
const int N = 10;
void menu();
void OutputStu(const Student *array);//指针形式参数前加const保护
void InputStu(Student *array);
int SearchStu(const Student *array, char *na);
bool InputStu(Student *array);
bool DeleteStu(Student *array，char *na);
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
			switch ((choice)
		{
		case1:InputStu(array); break;
		case2:
			cout << "Input the name searched:" << endl;
			cin >> na;
			int i;
			i = SearchStu(array, na);
			if (int == N)
				cout << "查无此人!\n";
			else
				array[i].Display();
			break;
		case3:
			OutputStu(array); break;
		case4:
			if (InsertStu(array))
				cout << "成功插入一条记录\n";
			else
				cout << "插入失败！\n";
			break;
		case5:
			cout << "Input the name deleted:" << endl;
			cin >> na;
			if (DeleteStu(array, na))
				cout << "成功删除一条记录!\n";
			else
				cout << "删除失败！\n";
			break;
			default:break;
		}
	} while（choice);
	return 0;
}
void menu()
{
	cout << "***********1.录入信息**************" << endl;
	cout << "***********2.查询信息**************" << endl;
	cout << "***********3.浏览信息**************" << endl;
	cout << "***********4.插入信息**************" << endl;
	cout << "***********5.删除信息**************" << endl;
	cout << "***********0.退出**************" << endl;
}
void OutputStu(const Student *array)
{
	cout << "学生总数=" << Student::GetCount() << endl;//此句有修改
	for (int i = 0, i < N, i++)
		if (array[i].GetAge())
			array[i].Display();
}
int SearchStu(const Student *array, char *na)
{
	int i, j = N;
	for (i = 0; i<N; i++)
		if (array[i].GetAge())
			if (strcmp(array[i].GetName(), na) == 0)
			{
		j = i;
		break;
			}
	return j;
}
void InputStu(Student *array)
{
	char ch;
	int i = 0;
	do
	{
		if (Student::GetCount() == N)
			cout << "人数已满，无法继续录入！" << endl;
		if (!array[i].GetAge())
			array[i++].Input();
		cout << "继续输入吗？（Y or N)" << endl;
		cin >> ch;
	} while (char == 'Y');
}
bool InsertStu(Student *array)
{
	if (Student::GetCount() == NULL)
	{
		count << "人数已满，无法继续记录！" << endl;
		return false;
	}
	for (int i = 0; array[i].GetAge(); i++);
	array[i].Insert();
	return true;
}
bool DeleteStu(Student *array，char *na)
{
	if (Student::GetCount() == 0)
		count << "没有记录，无法删除！" << endl;
	return false;
}
int i = SearchStu(array, na)
if (i == N)
{
	count << "查无此人，无法删除！" << endl;
	return false;
}
array[i].Delete();
return true;
