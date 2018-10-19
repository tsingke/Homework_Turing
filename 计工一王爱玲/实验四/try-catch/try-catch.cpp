#include<iostream>
#include<string>
using namespace std;
/*struct node {
	string name;
	int age;
	int score;
};*/
float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)throw(1);
	if (score < 0 || score > 5)throw(2);
	return score * 20;

}
int main()
{
	string name;
	int age;
	float score;
	
	cin >> name >> age >> score;
	try {
		score=checkAgeScore(age, score);
	}
	catch (int e)
	{
		if (e == 1)
		{
			cout << "the age error,please input again\n";
			cin >> age;
		}
		if (e == 2)
		{
			cout << "the score error,please input again\n";
			cin >> score;
			if (score >= 0 && score <= 5)
				score *= 20;
		}
			
	}
	cout << name<<" " << age <<" " << score;

	system("pause");
	return 0;



}