#include <iostream>
using namespace std;
char ch[100];
struct Student
{
	string name;
	int score;
	int age;
};
 float checkAgeScore(int age, float score)
{
	if (age<16||age>25)
	{
		throw age;
		return age;
	}
	if (score<0||score>5)
	{
		throw score;
		return score;
	}
}
int main()
{
	int i, m, n;
	struct Student s[1];
	cout << "输入1个学生姓名和成绩:" << endl;
	for (i = 0; i<10; i++)
	cin >> s[1].name >> s[1].score;
		try
		{
			cout << "年龄为" << checkAgeScore(int age, float score)<<endl ;
		    cout << "分数为" << checkAgeScore(int age, float score)<<endl ;
		}
		catch (int )
		{
			cout << "年龄或者分数不符合范围"<<endl ;

		}

	return 0;
}
