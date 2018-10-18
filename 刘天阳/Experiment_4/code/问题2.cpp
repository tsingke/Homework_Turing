#include<iostream>
#include "String.h"
using namespace std;

struct Student
{
	char name[20];
	int age;
	float score;
};

float checkAgeandScore(int age, float score)
{
	if ((age < 16) || (age > 25))
	{
		throw age;
	}
	if ((score<0)||(score>5))
	{
		throw score;
	}
	float new_score = score * 20;
	return new_score;
}

int main()
{
	Student* new_stud = new Student;
	cout << "请输入学生姓名，年龄(16~25)，c++成绩(0~5)" << endl;
	cin >> new_stud->name>> new_stud->age >> new_stud->score;
	try
	{
		float a=checkAgeandScore(new_stud->age,new_stud->score);
		if (a>=0)
		{
			cout << "学生姓名" << new_stud->name << endl;
			cout << "年龄:" << new_stud->age << endl;
			cout << "百分制成绩" <<a<< endl;
		}
	}
	catch (int)
	{
		cout << "年龄应该在16~25之间" << endl;
	}
	catch (float)
	{
		cout << "成绩应该在0~5之间" << endl;
	}
	cout << "测试学生信息结束" << endl;
	delete new_stud;
	system("pause");
	return 0;
}