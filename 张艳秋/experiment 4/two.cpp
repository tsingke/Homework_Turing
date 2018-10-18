#include<iostream>
#include<cstring>
using namespace std;

float checkAgeScore(int age, float score)
{
	if (age > 25 || age < 16)  throw age;
	if (score < 0 || score>5) throw score;
	return score * 20.00;
}
int main()
{
	char name[20] ;
	int age,m=0;
	float score;
	cin >>name >>age >> score;
	try
	{
		checkAgeScore(age, score);
	}
	catch (int)
	{
		cout << "expect of age" << endl;
		m = 1;
	}
	catch (float)
	{
		cout << "expect of score" << endl;
		m = 1;
	}
	if (m == 0)
	{
       cout << "name:" << name<<endl;
	   cout << "age:" << age << endl;
	   cout << "score" << checkAgeScore(age, score) << endl;
	
	}
	system("pause");

	return 0;
}
