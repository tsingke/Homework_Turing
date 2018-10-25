#include<iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (score > 5 || score < 0)
		throw score;
	if (age > 25 || age < 16)
		throw age;
	return (20 * score);
}
int main()
{
	char name;
	int age;
	float score;
	cin >> name >> age >> score;
	try
	{
		score = checkAgeScore(age, score);
		cout << name << '\t' << age << '\t' << score << endl;
	}
	catch (...)
	{
		cout << "Mistakes" << endl;
	}
	system("pause");
	return 0;
}
