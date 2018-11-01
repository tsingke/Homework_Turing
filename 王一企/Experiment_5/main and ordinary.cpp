/*主函数及一些其他的普通函数*/
////////////////////////////////////////////
////////////////////////////////////////////
#include <iostream>
#include <windows.h>
using namespace std;
#include "definition.cpp"
const int N = 10;
void menu();
void outputstu(Student *array);
void inputstu(Student *array);
int searchstu(Student *array, char *na);
int count = 0;
int main()
{

	Student array[N];
	int choice;
	do
	{
		menu();
		cout << "Please input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <= 3)

			switch (choice)
			{
			case 1:inputstu(array);
				break;
			case 2:cout << "Input the name searched" << endl;
				char na[20];
				cin >> na;
				int i;
				i = searchstu(array, na);
				if (i == N)
					cout << "查无此人！\n";
				else
					array[1].display();
				break;
			case 3:outputstu(array);
				break;
			default:break;
			} 
	}while (choice);
	return 0;
}

	void menu()
	{
		cout << "************1.录入信息************" << endl;
		cout << "************2.查询信息************" << endl;
		cout << "************3.浏览信息************" << endl;
		cout << "************0.退   出************" << endl;
	}
	void outputstu(Student *arry)
	{
		cout << "学生总数=" << count << endl;
		for (int i = 0; i < count; i++)
			array[i].display();
	}
	int searchstu(Student *array, char *na)
	{
		int i, j = N;
		for (i = 0; i < count; i++)
			if (strcmp(array[i].GetName(), na) == 0)
				j = 1;
		return j;
	}
	void inputstu(Student *array)
	{
		char ch;
		do
		{
			array[count].input();
			count++;
			cout << "继续输入嘛？（Y or N）" << endl;
			cin >> ch;
		} while (ch == 'Y');
	}