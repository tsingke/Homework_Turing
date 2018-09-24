/*************************************************
** 源文件   : score.c
** 功能说明 : Function Definations
** 创建时间 : 2018-9-2/17:35
/**************************************************/

/*----------------头文件--------------*/

#include "score.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/*----------------函数定义-------------*/

//1.读取学生基本数据
//void readData(SS stu[], int N)
//{
//
//	printf("请按照如下格式输入学生信息：学号,姓名,平时成绩,期末成绩\n");
//
//	for (int i = 0; i < N; i++)
//	{
//		printf("第%d个学生:", i + 1);
//		scanf("%s %s %f %f", &stu[i].number, &stu[i].name, &stu[i].dailyScore, &stu[i].finalScore);
//		printf("\n");
//	}
//
//	printf("------成绩录入完毕!--------\n");
//
//
//
//}

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
		fscanf(fp, "%s%s%f%f%f\n", (stu[index].number), (stu[index].name), &stu[index].dailyScore,&stu[index].expScore, &stu[index].finalScore);

		//输出原始学生信息
		printf("* %s	   平时成绩：%4.2f分	实验成绩:%4.2f分	期末成绩:%4.2f分\n", (stu[index].number), stu[index].dailyScore,stu[index].expScore, stu[index].finalScore);
		
		

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

		stu[i].generalScore = 0.2*stu[i].dailyScore +0.2*stu[i].expScore+0.6*stu[i].finalScore;
		printf("*%s	      	总成绩:%4.2f分\n", (stu[i].number), stu[i].generalScore);

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

		printf("第%d名信息  %s	总成绩:%4.2f分\n", i + 1, &(stu[i].number[0]), stu[i].generalScore);
	}


}

//5.计算N个学生的平均成绩和方差
void Aver_Variance(SS stu[], int N)
{
	float Aver = 0;
	float Variance = 0;
	for (int i = 0; i < N; i++)
	{
		Aver += stu[i].generalScore;
	}
	Aver /= N;
	for (int j = 0; j < N; j++)
	{
		Variance = pow((stu[j].generalScore - Aver), 2);
	}
	Variance /= N;
	printf("总成绩平均值为:%4.2f   总成绩方差为:%4.2f\n", Aver, Variance);
}
//6.查询某个学生的成绩信息
void SearchScore(SS stu[], int N)   
{
	char number[10];
	printf("请输入学号:\n");   
	for (int i = 0; i < 10; i++)
	{
		scanf("%c", &number[i]);      
	}
	getchar();
	for (int i=0; i < N; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (number[j] == stu[i].number[j])
			{
				if (j == 9)
				{

					printf("*%s   平时成绩:%4.2f分    实验成绩:%4.2f分    期末成绩:%4.2f分   总评成绩:%4.2f分\n", (stu[i].number),  stu[i].dailyScore, stu[i].expScore,stu[i].finalScore, stu[i].generalScore);
				}
			}
		}
	}

}


