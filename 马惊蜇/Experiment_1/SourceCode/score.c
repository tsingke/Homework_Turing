/*************************************************
** 源文件   : score.c
** 功能说明 : Function Definations
** 创建时间 : 2018-9-21/17:35
/**************************************************/

/*----------------头文件--------------*/

#include "score.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS；

/*----------------函数定义-------------*/

SS* ReadDataFromFile(int *N)
{
	printf("\n\n------------第一步：从文件读取学生信息---------------\n\n");

	SS *stu;
		FILE *fp = NULL;
		int cnt = 0;
		int index = 0;
		fp = fopen("data.txt", "r");
		//获取学生数目
		if (fp == NULL){
			printf("Failed to open the file!!!\n");
			getchar();
		}
		else{
			fscanf(fp, "%d", &cnt);
			*N = cnt;
		}
		printf("学生数目为：%d\n", cnt);
		Sleep(1000);

		//所有学生分配存储空间
		stu = (SS*)malloc(cnt*sizeof(SS));

		//读取学生信息
		while ((!feof(fp)) && (index < cnt))
		{
			fscanf(fp,"%s %s %f%f%f\n", stu[index].num, stu[index].name, &stu[index].dayscr, &stu[index].expscr, &stu[index].finscr);
			printf("* 学号：%s	姓名:%s		平时成绩：%4.2f分		实验成绩:%4.2f分		期末成绩:%4.2f分\n", stu[index].num, stu[index].name, stu[index].dayscr, stu[index].expscr, stu[index].finscr);
			index++;

		}
		fclose(fp);
		return stu;


}

void CalcuGenscr(SS stu[], int N)
{
	printf("\n\n-------------第二步: 计算每个学生的总评成绩-----------\n\n");
	
	for (int i = 0; i < N; i++)
	{
		stu[i].genscr = 0.2*stu[i].dayscr + 0.2*stu[i].expscr + 0.6*stu[i].finscr;
		printf("* %s			总成绩:%4.2f分\n", stu[i].num, stu[i].genscr);

	}

}

int cmpBigtoSmall(const void *a, const void *b)
{

	SS *aa = (SS *)(a);
	SS *bb = (SS *)(b);



	if ((*aa).genscr < (*bb).genscr)  return 1;

	else if ((*aa).genscr >(*bb).genscr)  return -1;

	else
		return 0;

}

void SortScore(SS stu[], int N)
{

	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);

}

void PrintOut(SS stu[], int N)
{
	printf("\n------第三步: 根据总成绩输出学生排名信息!------\n\n");

	for (int i = 0; i < N; i++)
	{
		printf("第%d名 %s 信息 %s			总成绩:%4.2f分\n", i + 1,&(stu[i].name[0]), &(stu[i].num[0]), stu[i].genscr);

	}
}

void Ave_Variance(SS stu[], int N)
{
	printf("\n-------第四步： 统计该课程成绩的均值和方差--------\n\n");
	float ave;
	ave = 0.2*(stu[0].genscr + stu[1].genscr + stu[2].genscr + stu[3].genscr + stu[4].genscr);
	float var;
	var = 0.2*(pow(stu[0].genscr - ave, 2) + pow(stu[1].genscr - ave, 2) + pow(stu[2].genscr - ave, 2) + pow(stu[3].genscr - ave, 2) + pow(stu[4].genscr - ave, 2));

	printf("总成绩平均值为：%4.2f，总成绩方差为：%4.2f\n", ave, var);

}

void SearchScore(SS stu[])
{
	printf("\n-------第五步： 查询某位学生信息----------\n\n");
	char number[10];
	int flag = 1;
	printf("请输入学号：\n");

	for (int j = 0; j < 10; j++)
	{
		scanf("%c", &number[j]);
	}
	getchar();

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (stu[i].num[j] != number[j]){
				flag = 0;
				break;
			}
		}
		if (flag == 1){
			printf("* %s	平时成绩：%4.2f分	实验成绩：%4.2f分	期末成绩:%4.2f分    总成绩为:%4.2f分\n", (stu[i].name), stu[i].dayscr, stu[i].expscr, stu[i].finscr, stu[i].genscr);
			break;

		}
		else if (i == 5){

			printf("查无此人！！\n");

		}
		flag = 1;
				
				
	}

}
