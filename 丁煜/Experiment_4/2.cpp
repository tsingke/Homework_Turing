#include<iostream>
using namespace std;

char name[10];
int age;
float score;

float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25) throw age;
	if (score < 0 || score>5) throw score;
	return (score * 20);
}

int main()
{
	cout << "name" << endl;
	cin >> name;
	cout << "age(16~25)" << endl;
	cin >> age;
	cout << "score(0~5)" << endl;
	cin >> score;
	try
	{
		cout << "name:" << name << endl;
		cout << "age:" << age << endl;
		cout << "score:" << checkAgeScore(age,score) << endl;
	}
	catch (int)
	{
		cout << "There are someting error in age or score" << endl;
	}
	cout << "calculate finished" << endl;

	system("pause");
	return 0;
}