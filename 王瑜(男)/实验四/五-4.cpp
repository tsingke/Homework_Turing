#include<iostream>
using namespace std;
int checkAgeScore(int age, int score)
{
	if (!(age >= 16 && age <= 25))
		throw 1;
	if (!(score >= 0 && score <= 5))
		throw 1.0;
	return score;
}
int main()
{
	char name[6];
	int age;
	int score;
	int agetest;
	int scoretest;
	cout << "请输入名字：" << endl;
	cin.getline(name,6);
	cout << "请输入年龄和分数:" << endl;
	cin >>age;
	cin >> score;
	try {
		scoretest = checkAgeScore(age, score);
		cout << "名字为：";
		for (int i = 0; i < 6; i++)
			cout << name[i];
		cout << endl;
		cout << "年龄为;" << age<<endl;
		cout << "分数为：" << score << endl;
	}
	catch (int)
	{
		cout << "年龄错误" << endl;
	}
	catch (float)
	{
		cout << "分数错误" << endl;
	}
	system("pause");
	return 0;
}
