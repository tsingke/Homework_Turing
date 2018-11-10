
#include<iostream>

#include<Windows.h>

using namespace std;

#include "标头.h"

const int N = 10;

void menu();

void OutputStu(Student *array);

int SearchStu(Student*array, char*na);

void InputStu(Student*array);

int counts = 0;

int main()

{

	Student array[N];//定义学生数组

	int choice;//读入选项

	do

	{

		menu();

		cout << "please input your choice";

		cin >> choice;

		if (choice >= 0 && choice <= 3)

			switch (choice)

			{

			case 1:InputStu(array); break;

			case 2:cout << "Input the name searched" << endl;

				char na[20];

				cin >> na;

				int A;

				A= SearchStu(array, na);

				if (A = N)

					cout << "查无此人\n";

				else

					array[A].Display();

				break;

			case 3:OutputStu(array); break;

			default:break;

			}



	} while (choice);

	system("pause");

	return 0;

}

void menu()

{

	cout << "******1.录入信息******" << endl;

	cout << "******2.查询信息******" << endl;

	cout << "******3.浏览信息******" << endl;

	cout << "******0.退   出******" << endl;

}

void OutputStu(Student *array)

{

	cout << "学生总人数=" << counts << endl;

	for (int i = 0; i < counts; i++)

		array[i].Display();

}

int SearchStu(Student*array, char*na)

{

	int i, j =N;

	for (i = 0; i < counts; i++)

		if (strcmp(array[i].GetName(), na) == 0)
		
			j = i;
		

	return j;

}

void InputStu(Student*array)

{

	char ch;

	do {

		array[counts].Input();

		counts++;

		cout << "继续输入吗？（Y or N)" << endl;

		cin >> ch;

	} while (ch == 'Y');

}
