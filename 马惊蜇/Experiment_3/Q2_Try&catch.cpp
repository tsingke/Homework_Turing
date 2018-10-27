#include <iostream>
#include <Windows.h>
using namespace std;
float checkAgeScore(int, float);
int main()
{
	char* name = new char[30];
	cout << "Please enter a student name: ";
	cin >> name;
	int age = 0;
	//cout << "Please enter " << name << "'s score: ";
	float score = 0;
	cout << "Please enter "<<name<<"'s age and score: ";
	cin >> age >> score;
	try
	{
		cout << name << "'s mark in the percentage system is£º" << checkAgeScore(age, score) << endl;

	}
	catch (int age){
		cout << "Beyond the reasonable range of age(16-25): age = " << age << endl;
	}
	catch (float score){
		cout << "Beyond the reasonable range of score(0-5): score = " << score << endl;

	}
	cout << "Calculate finished." << endl;
	system("pause");
	return 0;
}
float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25) throw age;
	if (score < 0 || score>5) throw score;
	return score * 20;

}