#include<iostream>
using namespace std;

float cheack(int age,float score);

int main()
{
	int age;
	char name[20];
	float score;
	cin>>name>>age>>score;
	cout<<name<<endl;

	try
	{
		cheack(age,score);
	
	}
	catch(int)
	{
		cout<<"age not in range"<<endl<<"finish"<<endl;
		
	}

	catch(float)
	{
		cout<<"score not in range"<<endl<<"finish"<<endl;
	}


	return 0;
}

float cheack(int age,float score)
{
	if(age<16||age>20) throw age;
	cout<<age<<endl;
	
	
	if(score<0||score>5) throw score;
	cout<<score<<endl;

	return 0;
}
