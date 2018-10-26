#include<iostream>
#include <stdlib.h>
using namespace std;
float checkAgeScore(int age, float score5)
{

	
	if ( age<16)
		
		throw age;
	if (age > 25)
		throw age;

	else
		int i = 1;
	
	if ( score5<0)

		throw score5;
	if (score5 > 5)
		throw score5;

	else
		int i= 1;

	
	
		return score5 * 20;

	
		
}
int main()
{
	char name[5];
	int age;
	float score5, score100;
	cout << "请输入学生姓名：" << endl;

		cin >> name;
	
	cout << "请输入学生年龄：" << endl;
	cin >> age;
	cout << "请输入学生五分制考试成绩：" <<endl;
	cin >> score5;
	try
	{
		score100 = checkAgeScore(age, score5);
		cout << "输出学生姓名：" <<name<< endl;
		cout << "输出学生年龄：" <<age<< endl;
		cout << "输出学生百分制考试成绩：" << score100 << endl;
	}
	catch (int)
	{
		cout << "程序异常出错！" << endl;
	}
	catch (float)
	{
		cout << "程序异常出错！" << endl;
	}
	system("pause");
}

