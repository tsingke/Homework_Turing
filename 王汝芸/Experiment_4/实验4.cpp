#include<stdio.h>
#include<iostream>
using namespace std;

float checkAgeScore(int age, float score)
{
	//float newScore;//百分制成绩
	if (age < 16 || age > 25)
	{
		int err1 = 1;
		throw err1;//年龄超出范围
	}
	
	if(score < 0 ||score > 5)//成绩超出范围
	{
		float err2 = 2.0;
		throw err2;
	}
	cout << "百分制成绩为： " << float(score*20) << endl;
	return 1;
}
int main()
{
	char name[20];
	int age;
	float score;
	cout << "请输入学生姓名、年龄（16—25），五级制C++考试分数（0—5）" << endl;
	cin >> name >> age >> score;

	float newScore = 0;
	try
	{
		checkAgeScore(age, score);
	}
	catch(int)
	{

		cout << "error1:年龄不在范围内" << endl << "请重新输入年龄:";
		cin >> age;
		try 
		{
			checkAgeScore(age, score);
		}
		catch(float)
		{
			cout << "error2:成绩不在范围内" << endl << "请重新输入成绩:";
			cin >> score;
			checkAgeScore(age, score);
		}
		
	}
	catch (float)
	{
		cout << "error2:成绩不在范围内" << endl << "请重新输入成绩:";
		cin >> score;
		checkAgeScore(age, score);
	}
	
	return 0;
}