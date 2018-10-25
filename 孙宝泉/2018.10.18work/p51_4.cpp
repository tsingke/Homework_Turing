#include<iostream>
using namespace std;
void checkAgeScore(int age, char score)
{
	if (age < 16 || age>25)  throw age;
	if (score < 'A'|| score>'E') throw score;
	switch (score)  //通过switch语句输出score相应的百分制分数
	{
	
	case'E':
		cout << "60-" << endl;
		break;
	case'D':
		cout << "60-69" << endl;
		break;
	case'C':
		cout << "70-79" << endl;
		break;
	case'B':
		cout << "80-89" << endl;
		break;
	case'A':
		cout << "90+" << endl;
		break;
	}
	
}
int main()
{
	char a[20];
	int age;
	char score;
	cin >> a;
	cin >> age >> score;
	try   //第一次try
	{
		cout << "姓名：" << a << "    年龄：" << age;
		cout << "   百分制成绩为：";
		checkAgeScore(age,score);
		cout << endl;
	}
	/*****解决相应异常*****/
	catch (int)
	{
		cout << "年龄不在范围(16~25)  请重新输入： ";
		cin >> age;
	}
	catch (char)
	{
		cout << "成绩不在范围(A~E)  请重新输入： ";
		cin >> score;
	}
	if (score < 'A' || score>'E') //如果两个异常，第二次try
	{
		try
		{
			cout << "姓名：" << a << "    年龄：" << age;
			cout << "    百分制成绩为：";
			checkAgeScore(age, score);
			cout << endl;
		}
		catch (char)
		{
			cout << "成绩不在范围(A~E)，请重新输入： ";
			cin >> score;
		}
	}
	cout << "姓名：" << a << "   年龄：" << age << "    百分制成绩为: " ;
	checkAgeScore(age, score);
	cout << endl;
	system("pause");
	return 0;
	

}