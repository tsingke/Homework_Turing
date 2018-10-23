#include<iostream>
#include<windows.h>
#include<string>
using namespace std;

float checkAgeScore(int age,float score)
{
	if (age > 25 || age < 16)
		throw age;
	if (score < 0 || score>5)
		throw score;
}

int main()
{
	string name;
	int Age;
	float Score;
	cout << "请输入一个学生的名字：";
	cin >> name;
	cout << "请输入该学生的年龄：";
	cin >> Age;
	cout << "请输入该学生的成绩：";
	cin >> Score;
	
	try
	{
		checkAgeScore(Age, Score);
		cout << "输出该学生的姓名：" << name<<endl;
		cout << "输出该学生的年龄：" << Age<<endl;
		cout << "输出该学生的成绩：" << Score*20<<endl;
	}
	catch (float)
	{
		cout << "成绩不匹配" << endl;
	}
	catch (int)
	{
		cout << "年龄不匹配" << endl;
	}
	

	system("pause");
	return 0;
}

