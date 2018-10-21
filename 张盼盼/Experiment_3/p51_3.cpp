#include<iostream>
#include<cstring>
using namespace std;

float checkAgeScore(int age, float score)
{
	int flag=1;
	if (flag ==1)
	{
		if (age > 25 || age < 16)  throw age;
		if (score < 0 || score>5) throw score;
		flag = 0;
		return score * 20.00;
	}
	if (flag == 0)
		return 0;
}
int main()
{
	char name[20] ;
	int age;
	float score;
	cin >>name >>age >> score;
	try
	{
		checkAgeScore(age, score);
	}
	catch (int)
	{
		cout << "expect of age,score return 0" << endl;
	}
	catch (float)
	{
		cout << "expect of score ,score return 0" << endl;
	}
	cout << "name:" << name<<endl;
	cout << "age:" << age << endl;
	cout << "score" << checkAgeScore(age, score) << endl;
	system("pause");

	return 0;
}
