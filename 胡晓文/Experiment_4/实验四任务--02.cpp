#include<iostream>
#include<windows.h>
using namespace std;




float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score>5)
		throw score;
		return score;
}



int main() 
{
	char name[10];
	cout << "请输入学生的姓名（以#号键结束）：" << endl;
	char a;
	int n = 0;
	do 
	{
		cin >> a;
		name[n] = a;
		n++;
	} while (a != '#');



	cout << "请输入学生年龄：" << endl;
	int age;
	cin >> age;


	cout << "请输入学生五级制C++考试分数：";
	float score;
	cin >> score;


	try
	{
		cout << "学生姓名：";
		for (int i = 0; i < n-1; i++)
		{
			cout << name[i];
		}
		cout << endl;
		cout << "年龄：" << age << endl;
		cout << "分数：" << checkAgeScore(age, score)*20 << endl;
	}
	catch (int)
	{
			cout << "学生年龄与实际不符" << endl;
	}
	catch (float)
	{
		cout << "学生分数与实际不符" << endl;
	}


	system("pause");
	return 0;
}