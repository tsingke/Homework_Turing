#include <iostream>
using namespace std;


bool flag = false;
int checkAge(int age)
{
	if (age < 16 || age >25)
	{
		throw age;
	}
}
float checkScore(float score)
{
	if (score < 0 || score >5)
	{
		throw score;
	}
}
float checkAgeScore(int age, float score)
{
	try
	{
		checkAge(age);
		checkScore(score);
		flag = true;
	}
	catch (int)
	{
		cout << "Age Error" << endl;
	}
	catch (float)
	{
		cout << "Score Error" << endl;
	}

	return 0;
}


int main()
{
	char name[20];
	int age;
	int score;
	cin >> name;
	cin >> age >> score;
	checkAgeScore(age, score);
	if (flag)
	{
		cout << "Name:" << name << " Age:" << age << " Score:" << score*20 << endl;
	}
	system("pause");
	return 0;
}