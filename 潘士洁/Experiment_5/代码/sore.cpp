#include<iostream>
#include<Windows.h>
#include"student.h"
using namespace std;
const int N = 10;
void menu();
void Outputstu(Student *array);
void inputstu(Student *array);
int searchstu(Student *array, char* na);
int counnt = 0;
void menu()
{                                                              //定义菜单函数
	cout << "******* 1.^^^input message^^^***********" << endl;
	cout << "******* 2.^^^search message^^^**********" << endl;
	cout << "******* 3.^looking though message^******" << endl;
	cout << "******* 4.^^^   over     ^^^***********" << endl;
}
void Outputstu(Student *array)
{
	cout << "the total of students" << counnt <<endl;
	for (int i = 0; i < counnt; i++)
		array[i].display();
}
int searchstu(Student *array, char *na) {
	int i, j = N;
	for (i = 0; i < counnt; i++)
		if (strcmp(array[i].getname(), na) == 0) {
			j = i;
			return j;
		}
}
void inputstu(Student* array) 
{
	char ch;
	do {
		array[counnt].input();
		counnt++;
		cout << "do you countine ? (y or n)" << endl;
		cin >> ch;
	} while (ch == 'y');
}
int main() 
{
	Student array[N];
	int choice;
	do {
		menu();
		cout << "please input your choicec" << endl;
		cin >> choice;
		if (choice >= 0 && choice <= 3)
			switch (choice) {
			case 1:inputstu(array); break;
			case 2:cout << "input the name searched" << endl;
				char na[20];
				cin >> na;
				int i;
				i = searchstu(array, na);
				if (i == N)
					cout << "Error\n" << endl;
				else
					array[i].display();
				break;
			case 3:Outputstu(array); break;
			default:break;
			}
	} while (choice);
	system("pause");
	return 0;
}