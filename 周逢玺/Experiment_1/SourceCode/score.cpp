/*************************************************
** 源文件   : score.cpp
** 功能说明 : Function Definations
/**************************************************/
#include "score.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int N;//全局变量N，用来说明学生人数
struct Students SS[1000];//结构体声明
/*---------------手动输入学生信息------------------------*/
int readData()
{
	int i;
	cout << "---------输入班级人数-----------" << endl;
	cin >> N;
printf("----请按以下格式输入学生信息 学号 姓名 平常成绩 实验成绩 期末成绩 \n");
	for (i = 0; i < N; i++)
	{
		scanf("%s%s%f%f%f", &SS[i].number, &SS[i].name, &SS[i].dailyScore, &SS[i].expriScore, &SS[i].finalScore);
	}
	i = 0;
	FILE* fp;
	
	fp = fopen("data.txt", "w");
	
	fprintf(fp, "%d\n", N); // 附加一个“\n”,保证输入文件的数据能被正确读出
	for (i; i < N; i++)
	{

		printf("%s %s %3.2f %3.2f %3.2f\n", SS[i].number, SS[i].name, SS[i].dailyScore, SS[i].expriScore, SS[i].finalScore);

	}
	i = 0;
	for (i; i < N; i++)
	{
		fprintf(fp, "%s %s %3.2f %3.2f %3.2f\n", SS[i].number, SS[i].name, SS[i].dailyScore, SS[i].expriScore, SS[i].finalScore);
	}


	fclose(fp);



	return N;
}
/*------------------------从文件中读取学生信息-------------------------------*/
int readDataFromFile()
{
	printf("\n---------------------第一步 从文件读取学生信息------------------\n");
	FILE* fp;
	int i,count=0;
	fp = fopen("data.txt", "r");
	fscanf(fp, "%d", &N);
    
	printf("学生数目为%d\n",N);
	for (i = 0; i < N; i++)
	{
		fscanf(fp, "%s%s%f%f%f\n", &SS[i].number, &SS[i].name, &SS[i].dailyScore, &SS[i].expriScore, &SS[i].finalScore);
		printf("学号：%s        姓名：%-8s           平时成绩：%3.2f        实验成绩：%3.2f     期末成绩：%3.2f\n", SS[i].number, SS[i].name, SS[i].dailyScore, SS[i].expriScore, SS[i].finalScore);
	}
	
	return N;
}
/*---------------------计算总评成绩-------------------------------------*/
int calcuScore()
{
	printf("\n----------------第二步 计算出学生的总评成绩(=0.2*平时成绩+0.2实验成绩+0.6期末成绩)------------\n");
	int i = 0;
	Students *ss;
	ss = SS;
	for (; i < N; i++, ss++)
	{
		ss->generalScore = 0.2*SS[i].dailyScore + 0.2*SS[i].expriScore + 0.6*SS[i].finalScore;
		printf("学号：%s        姓名：%-8s            总评成绩：%3.2f\n", SS[i].number, SS[i].name, SS[i].generalScore);
	}
	return 0;
}
/*--------------------计算学生成绩排名-------------------*/
float sort(int N)
{
	int i, j, k;
	Students b;
	for (i = 0; i < N - 1; i++)
	{
		k = i;
		for (j = i + 1; j < N; j++)
			if ((SS[k].generalScore - SS[j].generalScore) < 0) k = j;
		if (k != i)
		{
			b = SS[i]; SS[i] = SS[k]; SS[k] = b;
		}

	}
	return 0;
}
/*-------------------------按格式打印信息-----------------------------------*/
int printOut()
{
	printf("\n-------------------第三步 得出学生成绩排名-----------------\n");

	int i = 0;
	for (; i < N; i++)
	{
		printf("第%-2d名；       学号：%s           姓名：%-8s        总评成绩：%3.2f\n",i+1, SS[i].number, SS[i].name, SS[i].generalScore);
	}
	return 0;
}
/*---------------------输入学号查询学生信息-------------------------*/
int search()
{
	printf("\n-----------输入学生号查成绩--------------\n");
	char num[20];
	bool flag = false;
	scanf("%s", num);
	string p = num;
	int i = 0;
	for (; i <= N; i++)
	{
		string q = SS[i].number;
		if (p == q)

		{
			printf("第%-2d名；       学号：%s           姓名：%-8s        总评成绩：%3.2f\n", i + 1, SS[i].number, SS[i].name, SS[i].generalScore);
				flag = true;
		};
	}
	if (flag==false)
			printf("\n-------error, cann't get anything!---------\n");
	getchar();
		return 0;
}
/*------------------------计算方差，平均值-----------------------------*/
int  variance()
{
	printf("\n-------班级成绩分析---------\n");
	float m, a = 0;
	int i = 0;
	for (; i < N;i++)
	{
		a = a + SS[i].generalScore;

	}
	m = a / N;
	printf("平均值 %4.2f        ", m);
	float b, e = 0;
	 i = 0;
	 b = m;
	for (; i < N; i++)
	{
		e = (SS[i].generalScore - b)*(SS[i].generalScore - b) / N;
	}

	printf("方差 %4.2f\n", e);
	return 0;
}
/*------------------------成绩分析-------------------------*/
int analyse()
{
	int i = 0;
		float j=0,l=0,k=0,n=0,f=0;
	
	for (i = 0; i < N; i++)
	{
		if (SS[i].generalScore >= 90)
			j = j + 1;
		else
		{
			if (SS[i].generalScore >= 80)
				l = l + 1;
			else
			{
				if (SS[i].generalScore >= 70)
					k = k + 1;
				else
				{
					if (SS[i].generalScore >= 60)
						n = n+ 1;
					else f = f + 1;
				}

			}

		}

	}
	printf("分段比例:90分以上%4.2f, 80~90分%4.2f, 70~80分%4.2f,  60~70分以上%4.2f,  不及格%4.2f", j / N, l / N, k / N, n / N, f / N);
	return 0;
}



