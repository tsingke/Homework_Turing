#include<iostream>
#include<windows.h>
using namespace std;

float checkAgeScore(int age, float score)
{
	if (age > 25 || age < 19)
		throw age;
	if (score < 0 || score>5)
		throw score;
	return score * 20;
}

int main()
{
	char name[20];
	int age;
	float score;
	cout << "������һ��ѧ�������� ���� �弶��C++���Կ��Է�����" << endl;
		cin >> name >> age >> score;

	try
	{
		score=checkAgeScore(age, score);
		cout << "������" << name << " ���䣺" << age << " �ٷ��Ʒ�����" << score << endl;
	
	}
	catch (int)
	{
		cout << "��������" << endl;
	}
	 catch(float)
	 {
		 cout << "��������" << endl;
	 }
	system("pause");
	return 0;
}

