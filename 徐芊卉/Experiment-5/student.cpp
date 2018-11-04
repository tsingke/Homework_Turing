#include "student.h"
int num1 = 0;
void menu()
{
	cout << "*********1.录入信息*********"<<endl;
	cout << "*********2.查询信息*********" << endl;
	cout << "*********3.浏览信息*********" << endl;
	cout << "*********0.退出*********" << endl;
}
void inputstu(student *array)
{
	int flag = 1, m = 0;
	while (flag)
	{
		array[m].input();
		m++;
		num1++;
		cout << "是否继续输入，是1，否0：";
		cin >> flag;
	}	
}
void search(student *array)
{
	int flag = 0;
	char na[10];
	cout << "请输入想要查询的姓名：";
	cin >> na;
	for(int i=0;i<num1;i++)
	{
		if (strcmp(na, array[i].getname()) == 0)
		{
			cout << "身份证：" << array[i].getid() << endl;
			cout << "学号：" << array[i].getnumber() << endl;
			cout << "专业：" << array[i].getspecialty() << endl;
			cout << "年龄：" << array[i].getage() << endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << "查无此人！" << endl;
}
void outputstu(student *array)
{
	cout << "学生人数为" << num1<<endl;
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
	cout << "请做出你的选择：";
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
		cout << "是否退出，1继续，0退出：";
		cin >> flag;
	}
	system("pause");
	return 0;
}