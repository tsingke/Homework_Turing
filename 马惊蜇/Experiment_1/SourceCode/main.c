#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include"score.h"
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS；


/*----------------------------------*
			Main Function
*-----------------------------------*/

int main()
{
	printf("------------------------------\n");
	printf("       学生成绩管理分析系统        \n");
	printf("          MJZのcode           \n");
	printf("------------------------------\n\n");

	int N = 0;       

	SS  *pstu = NULL;

	pstu = ReadDataFromFile(&N);
	Sleep(1000);

	/*-3.计算总成绩-*/
	CalcuGenscr(pstu, N);
	Sleep(1000);

	/*-4.根据学生成绩排名-*/
	SortScore(pstu, N);

	/*-5.按照排名输出学生信息-*/
	PrintOut(pstu, N);
	Sleep(1000);


	/*-6.计算成绩的均值和方差*/
	Ave_Variance(pstu, N);
	Sleep(1000);

	//7.查询某个学生成绩信息
	SearchScore(pstu);
	free(pstu);

	printf("\n");
	system("pause");
}