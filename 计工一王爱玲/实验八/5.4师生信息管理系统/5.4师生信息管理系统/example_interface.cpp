//实现interface.h中类的成员函数
#include"interface.h"
#include<iostream>
#include<string.h>
using namespace std;
Interface::Interface()
{
	numstu = 0;
	numgra = 0;
	numtea = 0;
	numpostgra = 0;
}
void Interface::display()
{
	cout << "*************0.退    出**************"<<endl;
	cout << "*************1.录入信息**************"<<endl;
	cout << "*************2.浏览信息**************"<<endl;
	
}
void Interface::run()
{
	int choice;
	do
	{
		display();
		cout << "please input your choice :";
		cin >> choice;
		switch (choice)
		{
		case 0:
			break;
		case 1:
			input();
			break;
		case 2:
			output();
			break;
		}
			

	} while (choice);

}

void Interface::input()
{
	int i;
	int type;
	char ch;
	do
	{
		cout << "输入人员类型（1-学生，2-研究生，3-在职研究生，4-老师）:";
		cin >> type;
		if (type == 1)
		{
			if (numstu == N)
				cout << "人数已满，无法继续录入" << endl;
			else
			{
				for (i = 0; strcmp(stu[i].getname(), "00") != 0; i++);
				
					stu[i].input();
					numstu++;
				
			}
		}
		else if (type == 2)
		{
			if (numgra == N)
				cout << "人数已满，无法继续录入" << endl;
			else
			{
				for (i = 0; strcmp(gra[i].getname(), "00") != 0; i++);
				
				gra[i].input();
				numgra++;

			}
		}
		else if (type == 3)
		{
			if (numpostgra== N)
				cout << "人数已满，无法继续录入" << endl;
			else
			{
				for (i = 0; strcmp(postgra[i].getname(), "00") != 0; i++);
				
					postgra[i].input();
					numpostgra++;	
			}
		}
		else if (type == 4)
		{
			if (numtea == N)
				cout << "人数已满，无法继续录入" << endl;
			else
			{
				for (i = 0; strcmp(tea[i].getname(), "00") != 0; i++);
				
					tea[i].input();
					numtea++;
			}
		}
		else
		{
			cout << "选择有误" << endl;
		}
		cout << "继续输入吗?(y/n)" << endl;
		cin >> ch;
	} while (ch == 'y');
}
void Interface::output()
{
	//int i;
	int type;
	cout << "输入要查看的人员类型（1-学生，2-研究生，3-在职研究生，4-老师）:";
	cin >> type;
	if (type == 1)
	{
		if (numstu == 0)
		{
			cout << "没有学生数据" << endl;
		}
		else
		{
			for (int i = 0; i < N; i++)
			{
				if (strcmp(stu[i].getname(), "00") != 0)
					stu[i].output();

			}

		}
	}
	else if (type == 2)
	{
		if (numgra == 0)
		{
			cout << "没有研究生数据" << endl;
		}
		else
		{
			for (int i = 0; i < N; i++)
			{
				if (strcmp(gra[i].getname(), "00") != 0)
					gra[i].output();
			}

		}
	}
	else if (type == 3)
	{
		if (numpostgra == 0)
		{
			cout << "没有在职研究生数据" << endl;
		}
		else
		{
			for (int i = 0; i < N; i++)
			{
				if (strcmp(postgra[i].getname(), "00") != 0)
					postgra[i].output();

			}

		}
	}
	else if (type == 4)
	{
		if (numtea == 0)
		{
			cout << "没有教室数据" << endl;
		}
		else
		{
			for (int i = 0; i < N; i++)
			{
				if (strcmp(tea[i].getname(), "00") != 0)
					tea[i].output();

			}
		}
	}
	else
	{
		cout << "选择有误，" << endl;
	}
}