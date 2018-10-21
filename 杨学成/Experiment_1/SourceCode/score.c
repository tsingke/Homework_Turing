#include "Head.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void readData(SS std[], int N)
{
	printf("请按照如下格式输入学生信息：学号,姓名,平时成绩,期末成绩\n");
	for (int i = 0; i <= N; i++) {
		printf("第%d个学生", i+1);
		scanf("%s %s %f %f", &std[i].number, &std[i].name, &std[i].dailyScore, &std[i].finalScore);
		printf("\n");
	}
	printf("成绩录入完毕\n");
}
SS* readDataFromFile(int *N)
{
	printf("\n读取成绩\n\n");
	SS *std;
	FILE *Fp = NULL;
	int count = 0;
	int index = 0;
	Fp = fopen("data.txt", "r");
	if (Fp != NULL) {
		fscanf(Fp, "%d", &count);
		*N = count;
	}
	else {
		printf("Failed!\n");
		getchar();
	}
	printf("学生数目为：%d\n", count);
	getchar();
	std = (SS*)malloc(count * sizeof(SS));
	while ((!feof(Fp)) && (index < count) ){
		fscanf(Fp, "%s%s%f%f\n", (std[index].number), (std[index].name), &std[index].dailyScore, &std[index].finalScore);
		printf("* 学号：%s	姓名:%s		平时成绩：%4.2f分		期末成绩:%4.2f分\n", (std[index].number), (std[index].name), std[index].dailyScore, std[index].finalScore);
		index++;
	}
	fclose(Fp);
	return std;
}
void calcuScore(SS std[], int N)
{
	printf("\n计算成绩\n\n");
	for (int i=0; i < N; i++) {
		std[i].generalScore = 0.2*std[i].dailyScore + 0.8*std[i].finalScore;
		printf("* 学号：%s	姓名:%s		总成绩:%4.2f分\n", (std[i].number), (std[i].name), std[i].generalScore);
	}
}
int compare(const void *a, const void *b)
{
	SS *aa = (SS *)a;
	SS *bb = (SS *)b;
	if ((*aa).generalScore < (*bb).generalScore) return 1;
	else if ((*aa).generalScore > (*bb).generalScore) return -1;
	else return 0;
}
void sortScore(SS std[], int N)
{
	qsort(&(std[0]), N, sizeof(std[0]), compare);
}
void printOut(SS std[], int N)
{
	printf("\n输出成绩\n\n");
	for (int i = 0; i < N; i++)
	{
		printf("第%d名信息 学号：%s	姓名:%s		总成绩:%4.2f分\n", i + 1, &(std[i].number[0]), &(std[i].name[0]), std[i].generalScore);
	}
}