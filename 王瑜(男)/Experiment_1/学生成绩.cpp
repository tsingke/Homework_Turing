#include<fstream>
#include<iostream>
#include<string>
using namespace std;
typedef struct studentscore
{
	char number[10];
	char name[10];
	int dailyscore;
	int experimentscore;
	int finalscore;
}SS;
int main()
{
	SS stu[3];
	ifstream in;
	in.open("data.txt");
	char a[200];
	char b[7][30];
	for (int i = 1; i <= 133; i++)
		in >> a[i];
	int temp = 1;
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 22; j++)
		{
			b[i][j] = a[temp];
			temp++;
		}
	}
	int name_temp = 0;
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 16; j++)
		{
			if (j <= 10)
			{
				stu[i].number[j - 1] = b[i][j];
			}
			if (j>10&&j<=16)
			{
				stu[i].name[name_temp] = b[i][j];
				name_temp++;
			}
		}
		name_temp = 0;
	}
		int daily_num[6] = {90,85,89,95,78,82};
	int experiment_num[6] = {85,87,84,76,80,90};
	int final_num[6] = { 98,92,96,98,88,85 };
	for (int i = 1; i <= 6; i++)
	{
		stu[i].dailyscore = daily_num[i - 1];
		stu[i].experimentscore = experiment_num[i - 1];
		stu[i].finalscore = final_num[i - 1];
	}
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 0; j < 6; j++)
			cout << stu[i].name[j];
		cout << " ";
		for (int j = 0; j <= 9; j++)
		{
			cout << stu[i].number[j];
		}
		cout << " ";
		cout<<stu[i].dailyscore<<" ";
		cout<<stu[i].experimentscore<<" ";
		cout<<stu[i].finalscore;
		cout << endl;
	}
	in.close();
	getchar();
	getchar();
	return 0;
}