#include "student.h"
int num1 = 0;
void menu()
{
	cout << "*********1.¼����Ϣ*********"<<endl;
	cout << "*********2.��ѯ��Ϣ*********" << endl;
	cout << "*********3.�����Ϣ*********" << endl;
	cout << "*********0.�˳�*********" << endl;
}
void inputstu(student *array)
{
	int flag = 1, m = 0;
	while (flag)
	{
		array[m].input();
		m++;
		num1++;
		cout << "�Ƿ�������룬��1����0��";
		cin >> flag;
	}	
}
void search(student *array)
{
	int flag = 0;
	char na[10];
	cout << "��������Ҫ��ѯ��������";
	cin >> na;
	for(int i=0;i<num1;i++)
	{
		if (strcmp(na, array[i].getname()) == 0)
		{
			cout << "���֤��" << array[i].getid() << endl;
			cout << "ѧ�ţ�" << array[i].getnumber() << endl;
			cout << "רҵ��" << array[i].getspecialty() << endl;
			cout << "���䣺" << array[i].getage() << endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << "���޴��ˣ�" << endl;
}
void outputstu(student *array)
{
	cout << "ѧ������Ϊ" << num1<<endl;
	for (int i = 0; i < num1; i++)
	{
		array[i].display();
	}
}
int main()
{
	student array[N];
	char choice;
	int flag = 1;
     while (flag)
     {  
		 menu();
	cout << "���������ѡ��";
	cin >> choice;
		switch (choice)
		{
		case '1':
		{
			inputstu(array);
			break;
		}
		case '2':
		{
			search(array);
			break;
		}
		case '3':
		{
			outputstu(array);
			break;
		}
		default:
			break;
		}
		cout << "�Ƿ��˳���1������0�˳���";
		cin >> flag;
	}
	system("pause");
	return 0;
}