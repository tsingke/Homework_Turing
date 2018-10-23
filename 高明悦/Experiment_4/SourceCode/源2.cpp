#include<iostream>
#include<windows.h>
using namespace std;
float checkAgeScore(int age, float score);
int main()
{
	char xingming[20];
	int age;
	float score;
	cout << "请输入学生的姓名：" ;
	cin >> xingming[20];
	cout << "请输入年龄：";
	cin >>age;
	cout << "请输入五年制c++考试分数：";
	cin >> score;
	try
	{
		checkAgeScore(age, score);
	}
	catch (int)
	{
		cout << "error1:年龄不在范围内！请重新输入："<<endl;
		cin >> age;
		try
		{
			checkAgeScore(age, score);
		}
		catch (float)
		{
			cout << "error2：成绩不在范围内！请重新输入：" << endl;
			cin >> score;
			checkAgeScore(age, score);
		}
	}
	catch (float)
	{
		cout << "error2：成绩不在范围内！请重新输入：" << endl;
		cin >> score;
		checkAgeScore(age, score);
	}
	cout << "姓名：" << xingming[20] << endl;
	cout << "年龄：" << age << endl;
	cout << "成绩:" << score * 20 << endl;
	system("pause");
	return 0;
}
float checkAgeScore(int age, float score)
{
		if (age > 25 || age < 16)
		{
			int error1 = 1;
			throw error1;
		}
		if (score < 0 || score>5)
		{
			float error2 = 2.0;
			throw error2;
		}
		cout << "百分制成绩为： " << float(score * 20) << endl;
		return 1;
}
