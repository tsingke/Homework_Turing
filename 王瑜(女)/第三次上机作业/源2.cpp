#include<iostream>
#include<stdlib.h>
using namespace std;

//合理范围检查函数
float checkAgeScore(int age, float score)
{
	if ((age<16) || (age>25))    throw age;
	if ((score<0) || (score>5))  throw score;
	return score;
}

int main()
{
	char name[20];//学生名字
	int age;//学生年龄
	float score;//学生成绩

	cout << "请输入一位同学以下信息" << endl;
	cout << "姓名： 年龄： 成绩：" << endl;
	cin >> name >> age >> score;

	try//检查输入是否有误
	{
		cout << "学生姓名：" << name << endl;
		cout << "学生年龄：" << age << endl;
		cout << "学生成绩：" << checkAgeScore(age, score) << endl;
	}

	catch (int)//捕捉异常年龄信息，并输出提示
	{
		cout << "学生年龄输入错误！" << endl;
	}

	catch (float)//捕捉异常分数信息，并输出提示
	{
		cout << "学生分数输出错误！" << endl;
	}

	cout << "检查结束。" << endl;//catch后序语句块

	return 0;
}
