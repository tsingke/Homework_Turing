#include<iostream>
#include<Windows.h>

using namespace std;

typedef struct student
{
	char name[20];
	int age;
	float score;
}Student;
float checkAgeScore(int age, float score);
int main()
{
	int i = 0;
	cout << "输入学生个数" << endl;
	cin >> i;

	Student *a = new Student[i];

	cout << "输入学生姓名、年龄和C++成绩" << endl;

	int k = 0;
	for (k = 0; k < i; k++)
		cin >> a[k].name >> a[k].age >> a[k].score;

	cout << "输入完成" << endl;

	try
	{
		for (k = 0; k < i; k++)
			a[k].score=checkAgeScore(a[k].age, a[k].score);
	}
	catch (int)
	{
		cout << "年龄不合理"<<endl;
		system("pause");
		return 0;
	}
	catch (float)
	{
		cout << "成绩不合理"<<endl;
		system("pause");
		return 0;
	}
	for (k = 0; k < i; k++)
	{
		cout << a[k].name << "  " << a[k].age << "  " << a[k].score << endl;
	}
	

	delete [i]a;

	system("pause");
	return 0;
}
float checkAgeScore(int age, float score)
{
	if (age<16 || age>25)throw age;
	if (score<0 || score>5)throw score;
	return score * 20;
}