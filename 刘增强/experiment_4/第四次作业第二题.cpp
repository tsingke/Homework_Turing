
#include<iostream>
using namespace std;
float checkAgeScore(int age, float score);
int main()
{
	int age;
	float score;
	char name[100];
	cout << "请输入姓名，年龄（16-25），五级制成绩（0-5）" << endl;
	cin >> name;
	cin >> age >> score;
	try
	{
		cout << "姓名" << name << "\n年龄" << age << "\n百分制成绩" << checkAgeScore(age, score);
	}
	catch (float)
	{
		cout << "输入分数超出范围";
	}
	catch (int)
	{
		cout << "输入年龄超出范围";
	}
	system("pause");
}
float checkAgeScore(int age, float score)
{
	if (age > 25 || age < 16)
		throw age;
	if (score < 0 || score>5)
		throw score;
	return score * 20;
}











