#include<iostream>
#include<Windows.h>
using namespace std;
float checkAgeScore(int age, float score)
{
	
	if (age < 16 || age>20)throw 1;
	if (score < 0 || score>5)throw 'a';
	return score * 20;
}
int main()
{
	char name[10];
	int age;
	float score;
	cout << "请输入该学生的姓名" << endl;
	for (int i = 0; i < 10; i++)
	{

		if (name[i] == '\n')
			break;
		else
			cin >> name[i];
	}
	cout << "请输入该学生的年龄" << endl;
	cin >> age;
	cout << "请输入该学生的分数" << endl;
	cin >> score;
	try
	{
		cout << "年龄" << age << endl;
		cout << "分数" << checkAgeScore(age, score) << endl;
	}
	catch (int) {
		cout << "年龄出现异常";
	}
	catch (char) {
		cout << "分数出现异常";
	}
	for (int i = 0; i < 10; i++)
	{

		if (name[i] == '\n')
			break;
		else
			cout << name[i];
	}
	system("pause");
	return 0;
}