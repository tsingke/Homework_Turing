#include<iostream>

using namespace std;


float checkAgeScore(int age, float score)
{
	if ((age < 16) || (age > 25))
		throw age;
	if ((score < 0) || (score > 5))
		throw score;
	return ((score) / 5 * 100);
}

int main()
{
	char name[10];
	int age;
	float score;
	cout << "Please input the information:\n";
	cin >> name >> age >> score;
	try
	{

		cout << "Final consequence is:" << checkAgeScore(age, score) << "%" << endl;
		cout << "the concrete information :\n" << "Name:" << name << "\nAge:" << age << "\nScore:" << score << endl;

	}

	catch (int)  //捕获异常并作出处理
	{
		cout << "the age input error!";
	}
	catch (float)
	{
		cout << "the score input error!";
	}
	system("pause");
	return 0;
}