
#include<iostream>
using namespace std;
float checkAgeScore(int age, float score);
int main()
{
	int age;
	float score;
	char name[100];
	cout << "���������������䣨16-25�����弶�Ƴɼ���0-5��" << endl;
	cin >> name;
	cin >> age >> score;
	try
	{
		cout << "����" << name << "\n����" << age << "\n�ٷ��Ƴɼ�" << checkAgeScore(age, score);
	}
	catch (float)
	{
		cout << "�������������Χ";
	}
	catch (int)
	{
		cout << "�������䳬����Χ";
	}
	system("pause");
}
float checkAgeScore(int age, float score)
{
	if (age > 25 || age < 16)
		throw age;
	if (score < 0 || score>5)
		throw score;
	return score * 20;
}











