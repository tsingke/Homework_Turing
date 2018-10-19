#include<iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (age > 25 || age < 16)
		throw age;
	if (score < 0 || score>5)
		throw score;
	return score * 20;
}
int main()
{
	char name[20];
	int age; float score;
	cin >> name >> age >> score;
	try {
		score = checkAgeScore(age, score);
		cout << "学生姓名：" << name << " " << "学生年龄：" << age << " " << "学生百分制分数:" << score << endl;
	}
	catch (int e) {
		cout << "年龄出错" << e << endl;
	}
	catch (float)
	{
		cout << "分数出错" << endl;
	}
	system("pause");
	return 0;
}