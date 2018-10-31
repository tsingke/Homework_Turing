#include<iostream>

using namespace std;

float checkAgeScore(int age, float score)

{

	if (age < 16 || age>25)

		throw age;



	if (score < 0 || score>5)

		throw score;

	cout << 20 * score << endl;

	cout << age << endl;

}

int main()

{

	char name[20];

	int age;

	float score;

	cin >> name >> age >> score;

	float mark;

	cout << "name=" << name << endl;

	try

	{

		cout << checkAgeScore(age, score) << endl;

	}

	catch (int)

	{

		cout << "age error" << endl;

	}

	catch (float)

	{

		cout << "score error" << endl;

	}

	cout << "calculate finished" << endl;

	system("pause");

	return 0;

}