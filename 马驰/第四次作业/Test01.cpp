#include "head.h"
#include <iostream>

using namespace std;

const int N = 10;

void menu();
void outputStu(Student *array);
void inputStu(Student *array);
int searchStu(Student *array, char *na);

int counts = 0;

int main() {
	Student array[N];
	int choice;
	do {
		menu();
		cout << "Plese input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <= 3) {
			switch (choice) {
			case 1:inputStu(array);
				break;
			case 2:cout << "Input the name searched" << endl;
				char na[20];
				cin >> na;
				int i;
				i = searchStu(array, na);
				if (i == N)
					cout << "���޴���!\n";
				else
					array[i].display();
				break;
			case 3:outputStu(array);
				break;
			default:
				break;
			}
		}
	} while (choice);
	return 0;
}

void menu() {
	cout << "--------1.¼����Ϣ--------" << endl;
	cout << "--------2.��ѯ��Ϣ--------" << endl;
	cout << "-------3.�����Ϣ--------" << endl;
	cout << "-------0.�˳�--------" << endl;
}

void outputStu(Student *array) {
	cout << "ѧ��������=" << counts << endl;
	for (int i = 0; i < counts; i++)
		array[i].display();
}

int searchStu(Student *array, char *na) {
	int i, j = N;
	for (i = 0; i < counts; i++) {
		if (strcmp(array[i].getName(), na) == 0)
			j = i;
	}
	return j;
}

void inputStu(Student *array) {
	char ch;
	do {
		array[counts].input();
		counts++;
		cout << "����������?(Y or N)" << endl;
		cin >> ch;
	} while (ch == 'Y');
}