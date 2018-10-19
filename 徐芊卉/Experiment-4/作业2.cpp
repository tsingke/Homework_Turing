#include<iostream>
using namespace std;
float checkAgeScore(int age,float score)
{
	float m;
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score>5)
		throw score;
	return score*20;
}
int main()
{
	char n[20];
	int a;
	float s;
	cin >> n>> a >> s;
    try
	{
		cout<<"该学生成绩为"<<checkAgeScore(a, s)<<endl;
	}
	catch (int)
	{
		cout << "年龄error" << endl;
	}
	catch (float)
	{
		cout << "成绩error" << endl;
	}
	cout << "该学生姓名为" << n<<endl;
	cout << "该学生年龄为" << a<<endl;
	system("pause");
	return 0;
}