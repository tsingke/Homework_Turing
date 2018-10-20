#include<iostream>
using namespace std;

float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score>5)
		throw score;
	return score * 20;
}
int main()
{

	char name[10];
	int age;
	float score;
	cout << "请输入学生的姓名、年龄和成绩:";
	cin >> name >> age >> score;
	try
	{
		score = checkAgeScore(age, score);
		cout << "学生姓名:" << name << " " << "年龄:" << age << " " << "百分制成绩:" << score << endl;

	}
	catch (int e)
	{
		cout << "学生年龄有差错" <<e<< endl;
	}
	catch (float e)
	{
		cout << "学生成绩有差错"<<e<< endl;
	}
	return 0;
	system("pause");

}