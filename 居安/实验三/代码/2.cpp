#include<iostream>
#include <stdlib.h>
using namespace std;
float checkAgeScore(int age, float score5)
{

	
	if ( age<16)
		
		throw age;
	if (age > 25)
		throw age;

	else
		int i = 1;
	
	if ( score5<0)

		throw score5;
	if (score5 > 5)
		throw score5;

	else
		int i= 1;

	
	
		return score5 * 20;

	
		
}
int main()
{
	char name[5];
	int age;
	float score5, score100;
	cout << "������ѧ��������" << endl;

		cin >> name;
	
	cout << "������ѧ�����䣺" << endl;
	cin >> age;
	cout << "������ѧ������ƿ��Գɼ���" <<endl;
	cin >> score5;
	try
	{
		score100 = checkAgeScore(age, score5);
		cout << "���ѧ��������" <<name<< endl;
		cout << "���ѧ�����䣺" <<age<< endl;
		cout << "���ѧ���ٷ��ƿ��Գɼ���" << score100 << endl;
	}
	catch (int)
	{
		cout << "�����쳣����" << endl;
	}
	catch (float)
	{
		cout << "�����쳣����" << endl;
	}
	system("pause");
}

