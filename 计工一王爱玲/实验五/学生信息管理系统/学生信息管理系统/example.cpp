#include<iostream>
#include<string.h>
#include"3_26_student.h"
using namespace std;
const int N = 10;
void menu();
void outputstu(student *array);
void inputstu(student *array);
int searchstu(student *array, char *na);
int count1 = 0;
int main()
{
	student array[N];
	int choice;
	do
	{
		menu();
		cout << "please input your choice\n";
		cin >> choice;
		if (choice >= 0 && choice <= 3)
		{
			switch (choice)
			{
			case 1:inputstu(array); break;
			case 2:cout << "input you want to search's name:";
				char nam[10];
				cin >> nam;
				int i;
				i = searchstu(array, nam);
				if (i == N)cout << "查无此人";
				else array[i].display();
				break;
			case 3:outputstu(array); break;
			default: break;


			}
		}
	}while(choice);

	system("pause");
	return 0;
}
void menu()
{
	cout << "**********1.录入成绩*******" << endl;
	cout << "**********2.查询成绩*******" << endl;
	cout << "**********3.浏览成绩*******" << endl;
	cout << "**********0.退出***********" << endl;
}
void outputstu(student *array)
{
	cout << "学生总人数=" << count1 << endl;
	for (int i = 0; i < count1; i++)
	{
		 array[i].display();

	}
}
void inputstu(student *array)
{
	char ch;
	do
	{
		array[count1].Input();
		count1++;
		cout << "继续输入吗？（Y or N）" << endl;
		cin >> ch;
	} while (ch == 'Y');
}
int searchstu(student *array, char *na)
{
	int i, j = N;
	for (i = 0; i < count1; i++)
	
		if (strcmp(array[i].getname(), na) == 0)
			j = i;
	return j;
}











