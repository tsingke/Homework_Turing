#include<iostream>
using namespace std;

float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
	{
		throw age;
	}
	else if (score < 0||score>5)
	{
		throw score;
	}
	else
		return score*20;
}



int main()
{
	char name[15];
	int age;
	float score;
	cin>>name;
	cin>>age>>score;
	try
	{
		checkAgeScore(age,score);
	}
	catch(int)
	{
		cout<<"Age is faulse!"<<endl;
	}
	catch(float)
	{
		cout<<"Score is faulse!"<<endl;
	}
	cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"Score(100%):"<<checkAgeScore(age,score);
	
	
	system("pause");
	return 0;
}