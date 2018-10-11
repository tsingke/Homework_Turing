#include "first homework.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>


/*----------------函数定义-------------*/

//1.读取学生基本数据

SS* readDataFromFile(int *N)
{

	printf("\n\n-----学生的成绩信息表--------\n\n");

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

	//2.给所有学生分配存储空间
	stu = (SS*)malloc(count * sizeof(SS));

	//3.读取每条学生的信息
	while ((!feof(fp)) && (index < count))
	{

		//读入文件数据到内存
		fscanf(fp, "%s%s %f%f%f\n", (stu[index].number), (stu[index].name), &stu[index].dailyScore,&stu[index].expScore, &stu[index].finalScore);

		//输出原始学生信息
		printf("* %s	平时成绩：%4.2f分	实验成绩：%4.2f分	期末成绩:%4.2f分\n", (stu[index].number), stu[index].dailyScore, stu[index].expScore, stu[index].finalScore);

		index++;
	}

	fclose(fp);

	return stu;
}

//2.计算N个学生各自的总评成绩
void calcuScore(SS stu[], int N)
{


//	printf("\n\n------第二步: 计算每个学生的总评成绩--------\n\n");

	for (int i = 0; i < N; i++)
	{
		//总成绩=0.2\*平时成绩+0.2\*实验成绩+0.6\*期末成绩
		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.2*stu[i].expScore + 0.6*stu[i].finalScore;
		//printf("* %s			总成绩:%4.2f分\n", (stu[i].number),  stu[i].generalScore);

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


	printf("\n------学生总成绩排名------\n\n");

	for (int i = 0; i < N; i++)
	{
		stu[i].rank = i+1;
		printf("第%d名   %s			总成绩:%4.2f分\n", i + 1, &(stu[i].number[0]),  stu[i].generalScore);
	}


}

/*-6.计算成绩的均值和方差*/
void Ave_Variance(SS stu[],int N)
{
	float ave;
	ave = 0.1667*(stu[0].generalScore + stu[1].generalScore + stu[2].generalScore + stu[3].generalScore + stu[4].generalScore + stu[5].generalScore);
	float variance;
	variance = 0.1667*(pow(stu[0].generalScore - ave, 2) + pow(stu[1].generalScore - ave, 2) + pow(stu[2].generalScore - ave, 2) + pow(stu[3].generalScore - ave, 2) + pow(stu[4].generalScore - ave, 2)+ pow(stu[5].generalScore - ave, 2));

	printf("总成绩平均值为：%4.2f，总成绩方差为：%4.2f\n", ave,variance);



}

/*-7.输入学号查成绩*/
void searchScore(SS stu[])
{
	printf("\n------输入学号查询成绩------\n\n");
	char number[10];
	printf("请输入学号：\n");
	//printf("%c", stu[0].number[0]);

	for (int j = 0; j < 10; j++)
	{
		scanf("%c", &number[j]);
	}
	getchar();

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (number[j] == stu[i].number[j])
			{
				if (j == 9)
				{
					printf("* %s	平时成绩：%4.2f分	实验成绩：%4.2f分	期末成绩:%4.2f分    总成绩:%4.2f分    排名:%d\n", (stu[i].number), stu[i].dailyScore, stu[i].expScore, stu[i].finalScore, stu[i].generalScore,stu[i].rank);

				}
			}

		}
	}

}
