#include <iostream>
#include<windows.h>
using namespace std;

struct student
{
	char name[20];
	int age;
	float score;

}stu;

float checkAgeScore(int age, float score)
{
	if ((age < 15 || age>25) && (score < 0 || score>5))
		throw 15;
	else if (age<15 || age>25)
		throw age;
	else if (score<0 || score>5)
		throw score;

	return float(20*score);
}

int main()
{
	cout << "请输入学生姓名 年龄 五级制c++考试成绩"<<endl;
	cin >> stu.name >> stu.age >> stu.score;
	try
	{
		cout << endl;
		checkAgeScore(stu.age, stu.score);
		cout << "姓名 " << stu.name << endl;
		cout << "年龄 " << stu.age << endl;
		cout << "百分制成绩 " << checkAgeScore(stu.age, stu.score) << endl;
	}

	catch (int a)
	{ 
		if(a == 15)
		{
			cout << "the range of age in 15-20" << endl;
			cout << "the range of score in 0-5" << endl;
		}
		else
		cout << "the range of age in 15-20"<<endl;
	}
	
	catch (float)
	{
		cout << "the range of score in 0-5" << endl;
	}
	
	
	system("pause");
	return 0;
}