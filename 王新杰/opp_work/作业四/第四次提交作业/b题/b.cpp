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
	cout << "请输入年龄（合理的年龄范围为16~25）：";
	cin >> age;
	cout << "请输入五级制C++语言考试分数（合理范围为0~5）:";
	cin >> score;
	cout << endl;

	try
	{
		cout << "该学生的百分制成绩为：" << checkAgeScore(age, score) << endl;
	}
	catch (int)
	{
		cout << "输入的年龄不在合理范围内！" << endl;
	}
	catch (float)
	{
		cout << "输入的五级制C++语言考试分数不在合理范围内！" << endl;
	}
	system("pause");
	return 0;
}