#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;

float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
	{
		throw age;
	}
	
	if (score < 0 || score>5) {
		throw score;
	}
	return 0;
}

int main()
{
	// 输入姓名
	string name;
	cin >> name;

	// 输入年龄
	int age = 0;
	cin >> age;

	// 输入成绩
	float score = 0;
	cin >> score;

	float checkAgeScore(int age, float score);
	try
	{
		checkAgeScore(age,score);
	}
	catch (int)
	{
		cout << "年龄不合理！" << endl;
	}
	catch (float)
	{
		cout << "成绩不合理！" << endl;
	}

	system("pause");
	return 0;
}

