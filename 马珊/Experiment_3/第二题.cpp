#include<iostream>
#include<Windows.h>
using namespace std;
float checkAgeScore(int x, float y)
{
	if (x <= 16 || x >= 25) throw x;
	if (y < 0 || y>5) throw y;
	return y;
}
int main()
{
	char *name[10];
	int age;
	float score;
	cin >> name[10];
	cin >> age >> score;
	try
	{
		cout << checkAgeScore(age, score)<<endl;
	}
	catch (int)
	{
		cout << "wrong age form!" << endl;
	}
	catch (float)
	{
		cout << "wrong score form!" << endl;
	}
	cout << "name=" << name[10] << endl << "age=" << age << endl << "score=" << score << endl;
	return 0;
	system("pause");
}


