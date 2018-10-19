#include <iostream>
#include "xx.h"
#include<Windows.h>
using namespace std;
int main()
{
	struct Student stu;
	cout << "Please enter the student name£¬age(16~25 )and c++grade(0~5):" << endl;
	cin >> stu.name >> stu.age >> stu.score;
	try
	{
		cout <<"Your C++ percentage grade is:"<< checkAgeScore(stu.age, stu.score) << endl;
	}
	catch (int)
	{
		cout << "Please input the age again!" << endl;
	}
	catch (float)
	{
		cout << "Please input the socre again!" << endl;
	}
	cout << "Thank you!" << endl;
	system("pause");
	return 0;
}
