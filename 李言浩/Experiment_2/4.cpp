#include<iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score>5)
		throw score;
	return score*20;
}
int main()
{
int age,i;
float score;
char name[3];
printf( "«Î ‰»Îname£∫\n");
getchar();
getchar();
getchar();
try
{
	
	checkAgeScore
		cout << "age score" << checkAgeScore(age, score) << endl;
}
catch (int)
{
	cout<<"The age is error."<<endl
}
catch (float)
{
		cout<<"The score is error."<<endl

}

printf("The score is :",score*20);
return 0;
}