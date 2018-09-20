#include "score.h"
#include <cmath>;
#include <iostream>
using namespace std;

void readData(SS stu[], int N)
{
	cout << "请输入学号，姓名，平时成绩，实验成绩，期末成绩" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> stu[i].number >> stu[i].name >> stu[i].dailyScore >> stu[i].experScore >> stu[i].finalScore;
	}
}

void calcuScore(SS stu[], int N)
{
	for (int i = 0; i < N; i++)
	{
		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.2*stu[i].experScore + 0.6*stu[i].finalScore;
	}
}

void sortScore(SS stu[], int N)		//根据成绩由高往低排序
{
	for (int i = 0; i < N; i++)
	{
		stu[i].rank = 1;			//排名标记，初始值为1
		for (int j = 0; j < N; j++)
		{
					
			if (j != i)				//避免自己跟自己比较
			{
			 if (stu[i].generalScore < stu[j].generalScore)		//若序号为i的同学成绩比j的同学成绩低，则序号为i的同学名次增大1位（即下降1位）
					{
						stu[i].rank += 1;
					}
			}
		}
	}
}

void printOut(SS stu[], int N)
{
	cout << "姓名  学号  排名  平时成绩  期末成绩  实验成绩  总评成绩" << endl;
	for (int i = 1; i <= N; i++)	//i表示排名次序
	{
		for (int j = 0; j < N; j++)	//
		{
			if (stu[j].rank == i)
			{
				cout << stu[j].name << "  " << stu[j].number << "  " << stu[j].rank << "  " << stu[j].dailyScore
					<< "  " << stu[j].experScore << "  " << stu[j].finalScore << " " << stu[j].generalScore<<endl;
				continue;
			}
		}
	}
}