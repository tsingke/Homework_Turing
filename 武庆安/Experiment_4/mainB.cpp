#include<iostream>
#include<string>
using namespace std;
struct Student
{
	char name[10];
	int age;
	float score;
};
float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw(1);
	if (score < 0 || score > 5)
		throw(2);
	return score * 20;

}

int main()
{
	Student* stu = new Student;
	float score;
	cin >> stu->name >> stu->age >> stu->score;
	try 
	{
		score = checkAgeScore(stu->age, stu->score);
	}
	catch (int e)
	{
		if (e == 1)
		{
			cout << "ÄêÁä·¶Î§ÓÐÎó\n";
			cin >> stu->age;
		}
		if (e == 2)
		{
			cout << "³É¼¨·¶Î§ÓÐÎó\n";
			cin >> stu->score;
			if (stu->score >= 0 && stu->score <= 5)
				stu->score *= 20;
		}

	}
	cout << stu->name << " " << stu->age << " " << stu->score << endl;

	system("pause");
	return 0;



}