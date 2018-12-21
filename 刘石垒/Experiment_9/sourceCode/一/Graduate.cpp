#include <iostream>
using namespace std;
#include "Graduate.h"
const int N = 10;
void menu();
void InputGra(Graduate *array);
void OutputGra(Graduate *array);
int SearchGra(Graduate *array, char *na);
int counts = 0;
int main()
{
	Graduate array[N];
	int choice;
	do
	{
		menu();
		cout << "Please input your choice:";
		cin >> choice;
		if (choice)
		{
			switch (choice)
			{
			case 1:InputGra(array); break;
			case 2:cout << "Input the name searched: " << endl;
				char na[20];
				cin >> na;
				cout << "请选择要查询";
				int i;
				i = SearchGra(array, na);
				if (i == N)
					cout << "查无此人！\n";
				else
				{	
					int temp;
					cout << "请选择要查询此人的哪项信息：（1.学号；2.入学成绩；3.研究领域；4.指导教师；5.成绩等级）" << endl;
					cin >> temp;
					array[i].Display(temp);	
				}break;
			case 3:OutputGra(array); break;
			default:break;
			}
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
	cout << "**********0.退    出**********" << endl;
}

int SearchGra(Graduate *array, char *na)
{
	int i, j = N;
	for (i = 0; i < counts; i++)
	{
		if (strcmp(array[i].GetName(), na) == 0)
		{
			j = i;
			break;
		}
	}
	return j;
}

void InputGra(Graduate *array)
{
	char ch;
	do
	{
		int demo1 = 0;
		int demo2 = 0;
		cout << "请选择输入方式：(1.默认为1；2.直接赋值；)" << endl;
		cin >> demo1;
		if (demo1 == 1)
			array[counts].Input();
		else
		{
			cout << "请选择复制第几个输入对象进行复制："<< endl;
			cin >> demo2;
			array[counts] = array[demo2 - 1];
		}
		counts ++;
		cout << "继续输入吗？(Y or N )" << endl;
		cin >> ch;
	} while (ch == 'Y');
}

void OutputGra(Graduate *array)
{
	cout << "研究生总人数： " << counts << endl;
	for (int i = 0; i < counts; i++)
	{
		array[i].Display();
	}
	float sum1 = 0;
	for (int i = 0; i < counts; i++)
		sum1 = sum1 + array[i].GetScore();
	float z = counts;
	cout << "研究生的平均分为： " <<sum1 / z<< endl<<endl;
}