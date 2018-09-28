/*************************************************
** 源文件   : score.c
** 功能说明 : Function Definations
** 创建时间 : 2018-9-2/17:35
/**************************************************/

/*----------------头文件--------------*/

/*#include "score.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/*----------------函数定义-------------*/

//1.读取学生基本数据
/*void readData(SS stu[], int N)
{

	printf("请按照如下格式输入学生信息：学号,姓名,平时成绩,期末成绩\n");

	for (int i = 0; i < N; i++)
	{
		printf("第%d个学生:", i + 1);
		scanf("%s %s %f %f", &stu[i].number, &stu[i].name, &stu[i].dailyScore, &stu[i].finalScore);
		printf("\n");
	}

	printf("------成绩录入完毕!--------\n");



}

SS* readDataFromFile(int *N)
{

	printf("\n\n------第一步: 从文件读取学生的成绩信息--------\n\n");

	SS *stu;// 开辟新空间,存取文件中的每个学生信息

	FILE *fp = NULL;
	int count = 0;
	int index = 0;

	fp = fopen("data.txt", "r");

	//1.获取学生数目
	if (fp != NULL)
	{
		fscanf(fp, "%d", &count);
		*N = count;
	}
	else
	{
		printf("failed to open the info file\n");
		getchar();
	}

	printf("学生数目为:%d\n", count);
	getchar();


	//2.给所有学生分配存储空间
	stu = (SS*)malloc(count * sizeof(SS));


	//3.读取每条学生的信息
	while ((!feof(fp)) && (index < count))
	{

		//读入文件数据到内存	
		fscanf(fp, "%s%s%f%f\n", (stu[index].number), (stu[index].name), &stu[index].dailyScore, &stu[index].finalScore);

		//输出原始学生信息
		printf("* 学号：%s	姓名:%s		平时成绩：%4.2f分		期末成绩:%4.2f分\n", (stu[index].number), (stu[index].name), stu[index].dailyScore, stu[index].finalScore);

		index++;


	}

	fclose(fp);

	return stu;
}

//2.计算N个学生各自的总评成绩
void calcuScore(SS stu[], int N)
{


	printf("\n\n------第二步: 计算每个学生的总评成绩--------\n\n");

	for (int i = 0; i < N; i++)
	{

		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.8*stu[i].finalScore;
		printf("* 学号：%s	姓名:%s		总成绩:%4.2f分\n", (stu[i].number), (stu[i].name), stu[i].generalScore);

	}
}


//3.根据总评成绩排名
int cmpBigtoSmall(const void *a, const void *b)
{

	SS *aa = (SS *)(a);
	SS *bb = (SS *)(b);



	if ((*aa).generalScore < (*bb).generalScore)  return 1;

	else if ((*aa).generalScore > (*bb).generalScore)  return -1;

	else
		return 0;

}

void sortScore(SS stu[], int N)
{

	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);

}


//4.按照一定的格式输出N个学生的信息
void printOut(SS stu[], int N)
{


	printf("\n------第三步: 根据总成绩输出学生排名信息!------\n\n");

	for (int i = 0; i < N; i++)
	{

		printf("第%d名信息 学号：%s	姓名:%s		总成绩:%4.2f分\n", i + 1, &(stu[i].number[0]), &(stu[i].name[0]), stu[i].generalScore);
	}


}
#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<cmath>
#include<fstream>

using namespace std;

struct Student {
	string sid;
	string name;
	double score[3];
	double total;
	int rank1;
};
struct Student a[30];
int main()
{
	ifstream fin;
	fin.open("data.txt");//读取本项目内txt里的数据
	if (fin.fail())
	{
		cout << "Input file opening failed!";
		exit(1);
	}
	for (int i = 0; i < 30; i++)
	{
		fin >> a[i].sid;
		fin >> a[i].name;
		fin >> a[i].score[0];
		fin >> a[i].score[1];
		fin >> a[i].score[2];


	}
	//fin.close();

	for (int i = 0; i < 30; i++)
	{
		printf("%s  %s  %lf %lf %lf %lf %d\n", &a[i].sid[0], &a[i].name[0],
			a[i].score[0], a[i].score[1], a[i].score[2], a[i].total, a[i].rank1);

	}
	/***读取成功*/


	/**计算总分**/
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



