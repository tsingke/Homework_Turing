#include<iostream>
#include<windows.h>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	else if (score < 0 || score>5)
		throw score;
	else
		return score * 20;
}
int main()
{
	char n[10];
	int age;
	float score;
	cout << "请输入学生姓名：";
	cin >> n;
	cout << "请输入年龄：";
	cin >> age;
	cout << "请输入分数:";
	cin >> score;
	cout << endl;

	try
	{
		cout << "该学生的成绩为：" << checkAgeScore(age, score) << endl;
	}
	catch (int)
	{
		cout << "年龄错误" << endl;
	}
	catch (float)
	{
		cout << "分数错误" << endl;
	}
	system("pause");
	return 0;
}