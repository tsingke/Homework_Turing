#include<iostream>

using namespace std;

float checkAgeScore(int age, int score);

typedef struct S
{
	char name[20];
	int age;
	float score;
};

int main()
{
	S Stu;
	cout << "请输入学生的姓名、年龄和五级制C++考试分数：" << endl;
	cin >> Stu.name

		>> Stu.age >> Stu.score;
	float  sco;
	try
	{

		sco = checkAgeScore(Stu.age, Stu.score);
	}
	catch (int)
	{
		cout << "年龄或分数范围不合理！（要求年龄为16~25，分数为0~5）" << endl;
	}
	cout << "\n学生姓名 " << Stu.name<< "\n学生年龄:" << Stu.age << "\n学生成绩：" << sco << endl;
	system("pause");
	return 0;

}


float checkAgeScore(int age, int score)
{
	if (age < 16 || age>25 || score < 0 || score>5)
		throw 0;
	return(score * 20);
}
