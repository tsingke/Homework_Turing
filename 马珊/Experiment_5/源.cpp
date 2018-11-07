//example3_26.cpp文件；包含主函数及其他一些普通函数
#include<iostream>
using namespace std;
#include"example3_26_student.h"
const int N = 10;
void menu();
void OutputStu(Student *array);
void InputStu(Student *array);
int SearchStu(Student *array, char *na);
int icount = 0;
int main()
{
	Student array[N];                   //定义学生数组
	int choice;                       //读出选项
	do
	{
		menu();
		cout << "Please input your choice:";
		cin >> choice;
		if(choice>=0&&choice<=3)
			switch (choice)
			{
			case 1:InputStu(array); break;
			case 2:cout << "Input the name searched" << endl;
				char na[20];
				cin >> na;
				int i;
				i = SearchStu(array, na);
				if (i = N)
					cout << "查无此人！\n";
				else
					array[i].Display();
				break;
			case 3:OutputStu(array); break;
			default: break;
			}
	} while (choice);
	return 0;
}
void menu()                   //定义菜单函数
{
	cout << "**********************1.录入信息*********************" << endl;
	cout << "***********************2.查询信息*********************" << endl;
	cout << "***********************3.浏览信息***********************" << endl;
	cout << "*****************0.退出************************" << endl;
}
void OutputStu(Student *array)                     //输出对象数组对象
{
	cout << "学生总人数=" << icount << endl;
	for (int i = 0; i < icount; i++)
		array[i].Display();
}
int SearchStu(Student *array, char *na)               //按姓名查询
{
	int i,j = N;
	for (i = 0; i < icount; i++)
		if (strcmp(array[i].GetName(), na) == 0)
			j = i;
	return j;
}
void InputStu(Student *array)                        //输入对象数组元素
{
	char ch;
	do
	{
		array[icount].Input();            //调用成员函数完成一个学生对象的数据输入
		icount++;
		cout << "继续输入吗？(Y or N)" << endl;
		cin >> ch;
	} while (ch == 'Y');
}