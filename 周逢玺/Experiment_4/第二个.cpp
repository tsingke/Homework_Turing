#include<iostream>
using namespace std;
float checkAgeScore(int age, float score);
int main()
{
	int age;
	float score;
	char name[20];
	cout<<"输入姓名，年龄，五分成绩"<<endl;
	cin >> name;
	cin >> age >> score;
	try
	{
		cout<<"姓名："<<name<<"  年龄"<<age<<"   百分制成绩"<<checkAgeScore(age,score)<<endl;
	}
	catch (int)
	{
		cout << "年龄超出范围\n";
	}
	catch (float)
	{
		cout << "分数超出范围\n";

	}
	return 0;
}
float checkAgeScore(int age,float score)
{
	
	if (age < 16 || age>25) throw age;
	if (score< 0 || score>5) throw score;
	return 20 * score;
}