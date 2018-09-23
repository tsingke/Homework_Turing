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
	printf("\b******************************\n");
	printf("       学生成绩管理分析系统        \n");
	printf("           杨奕帆著；           \n");
	printf("\b******************************\n\n");

	int N = 0;       

	SS  *stu = NULL;    //  结构体数组指针

	stu = ReadDataFromFile(&N);
	Sleep(500);

	/*计算总成绩*/
	Calcugeneralscore(stu, N);
	Sleep(500);

	/*根据成绩排名*/
	SortScore(stu, N);

	/*按照排名输出学生信息*/
	PrintOrderOut(stu, N);
	Sleep(500);


	/*计算成绩的均值和方差*/
	Ave_Variance(stu, N);
	Sleep(500);

   /*查询某个学生成绩信息*/
	SearchScore(stu);
	free(stu);

	printf("\n");
	system("pause");
}