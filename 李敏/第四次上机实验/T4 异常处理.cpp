#include <iostream>
#include <cstring>
using namespace std;
int checkAge(int age)
{
	if (age > 25 || age < 16)throw age;
	return age;

}
float checkSorce(float score)
{
	if (score>5 || score < 0)throw score;
	return score * 20;
}

int main()
{
	char s[20];
	int age;
	float score;
	cin >>s>> age >> score;
	cout << s << endl;
	try
	{
		cout << "age=" << checkAge(age) << endl;
		cout << "score=" << checkSorce(score) << endl;
	}
	catch (int)
	{
		cout << "One error" << endl;
	}
	catch (float)
	{
		cout << "One error" << endl;
	}
	cout << "finished" << endl;
	system("pause");
	return 0;
}