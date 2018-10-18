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


//    读取学生信息
SS* ReadDataFromFile(int *N)
{
	printf("\n\n------------Step1：从文件中读取学生信息---------------\n\n");

	SS *stu;                   //      结构体型指针变量stu
		FILE *fp = NULL;
		int stunum = 0;
		int index = 0;
		fp = fopen("data.txt", "r");             //      将学生数据读入
		if (fp == NULL){
			printf("Failed to open the file!!!\n");
			getchar();
		}
		else{
			fscanf(fp, "%d", &stunum);
			*N = stunum;
		}
		printf("学生数目为：%d\n", stunum);
		Sleep(1000);

		  //      为所有学生的信息分配存储空间
		stu = (SS*)malloc(stunum*sizeof(SS));

		  //      读取学生信息
		while ((!feof(fp)) && (index < stunum))
		{
			fscanf(fp,"%s %s %f%f%f\n", stu[index].num, stu[index].name, &stu[index].dailyscore, &stu[index].expscore, &stu[index].finalscore);   
			printf(" 学号：%s	姓名:%s		平时成绩：%4.2f分		实验成绩:%4.2f分		期末成绩:%4.2f分\n", stu[index].num, stu[index].name, stu[index].dailyscore, stu[index].expscore, stu[index].finalscore);
			index++;

		}
		fclose(fp);
		return stu;


}


//    计算总评成绩
void Calcugeneralscore(SS stu[], int N)
{
	printf("\n\n-------------Step2: 计算每个学生的总评成绩-----------\n\n");
	
	for (int i = 0; i < N; i++)
	{
		stu[i].generalscore = 0.2*stu[i].dailyscore + 0.2*stu[i].expscore + 0.6*stu[i].finalscore;
		printf(" %s			总成绩:%4.2f分\n", stu[i].num, stu[i].generalscore);

	}

}

int cmpBigtoSmall(const void *a, const void *b)
{

	SS *aa = (SS *)(a);
	SS *bb = (SS *)(b);



	if ((*aa).generalscore < (*bb).generalscore)  return 1;

	else if ((*aa).generalscore >(*bb).generalscore)  return -1;

	else
		return 0;

}

void SortScore(SS stu[], int N)
{

	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);

}

void PrintOrderOut(SS stu[], int N)
{
	printf("\n\n------Step3: 根据总成绩输出学生排名信息!------\n\n");

	for (int i = 0; i < N; i++)
	{
		printf("第%d名 %s        学号 %s		总成绩:%4.2f分\n", i + 1, &(stu[i].name[0]),  &(stu[i].num[0]),  stu[i].generalscore);
	}
}

void Ave_Variance(SS stu[], int N)
{
	printf("\n\n-------Step4： 统计该课程成绩的均值和方差--------\n\n");
	float ave;   //     总评成绩的平均值
	ave = 0.2*(stu[0].generalscore + stu[1].generalscore + stu[2].generalscore + stu[3].generalscore + stu[4].generalscore);
	float var;    //      定义方差
	var = 0.2*(pow(stu[0].generalscore - ave, 2) + pow(stu[1].generalscore - ave, 2) + pow(stu[2].generalscore - ave, 2) + pow(stu[3].generalscore - ave, 2) + pow(stu[4].generalscore - ave, 2));
	printf("总成绩平均值为：%4.2f，总成绩方差为：%4.2f\n", ave, var);
}


//     找寻要查找的学生的信息

void SearchScore(SS stu[])
{
	printf("\n\n-------Step5： 查询某位学生信息----------\n\n");
	char number[10];
	int flag = 1;
	printf("请输入学号：\n");

	for (int j = 0; j < 10; j++)
	{
		scanf("%c", &number[j]);   //依次将学号的每一个数字赋给数组
	}
	getchar();

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (stu[i].num[j] != number[j])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf(" %s	平时成绩：%4.2f分	实验成绩：%4.2f分	期末成绩:%4.2f分    总成绩为:%4.2f分\n", (stu[i].name), stu[i].dailyscore, stu[i].expscore, stu[i].finalscore, stu[i].generalscore);
			break;

		}
		else if (i == 5){

			printf("查询无果！！\n");

		}
		flag = 1;	
	}

}
