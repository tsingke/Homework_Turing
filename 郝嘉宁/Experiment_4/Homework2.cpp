#include<iostream>
#include<cstdlib>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (age>25||age<16)
	{
		throw age;
	}
	if (score>5||score<0)
	{
		throw score;
	}
	return score * 20;
}


int main()
{
    char name[5];
    int age;
    float score;
	student a;
	cout << "请依次输入学生的姓名、年龄、五级制分数" << endl;
	cin >> name >>age >> score;
	try
	{
		cout << "此同学成绩为：" << checkAgeScore(age,score) << endl;
	}
	catch (int)
	{
		cout << "年龄输入错误" << endl;
	}
	catch (float)
	{
		cout << "成绩输入错误" << endl;
	}
	system("pause");
	return 0;
}
