#define _CRT_SECURE_NO_WARNINGS

/* 函数的具体实现 */

#include "student.h"
#include<math.h>
#include<stdlib.h>
#include<stdio.h>

/*---------the define of the function--------*/

// 1、read the student's information
void readData(Stu stu[], int N)
{
	printf("please input the student's informaion as the follow format!\n");
	printf("number,name,dailyScore,finalScore\n");
	for (int i = 0; i < N; i++)
	{
		printf("the %d student:", i + 1);
		scanf("%s %s %f %f", &stu[i].number, &stu[i].name, &stu[i].dailyScore, &stu[i].finalScore);
		printf("\n");
	}
	printf("Score entry completed!");
}

Stu* readDataFromFile(int *N)
{
	printf("read data from file.....\n");
	Stu *stu;  // open a new place to access every student's information

	FILE *fp = NULL;
	int count = 0;
	int index = 0;
	fp = fopen("data.txt", "r");

	// 1、get the number of students
	if (fp != NULL)
	{
		fscanf(fp, "%d", &count);
		*N = count;
	}
	else
	{
		printf("fail to open the info file\n");
		getchar();
	}
	printf("the number of student is: %d\n", count);
	getchar();

	// 2、assign memory space to student
	stu = (Stu*)malloc(count * sizeof(Stu));

	// 3、read every student information
	while ((!feof(fp)) && (index < count))
	{
		// read data to memory
		fscanf(fp, "%s%s%f%f\n", (stu[index].number), (stu[index].name), &stu[index].dailyScore, &stu[index].finalScore);

		// output the student information
		printf("* 学号：%s	姓名:%s		平时成绩：%4.2f分		期末成绩:%4.2f分\n", (stu[index].number), (stu[index].name), stu[index].dailyScore, stu[index].finalScore);
		index++;
	}

	fclose(fp);
	return stu;
}

// 2、compute N student's generalScore
void calcuScore(Stu stu[], int N)
{
	printf("\n compute every student general Score! \n");

	for (int i = 0; i < N; i++)
	{
		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.8*stu[i].finalScore;
		printf("number: %s  name: %s  generalScore: %4.2f\n", stu[i].number, stu[i].name, stu[i].generalScore);
	}
}

// 3、sort by generalScore;
int cmpBigtoSmall(const void *a, const void *b)
{
	Stu *aa = (Stu *)(a);
	Stu *bb = (Stu *)(b);

	if ((*aa).generalScore < (*bb).generalScore)
		return 1;
	else if ((*aa).generalScore > (*bb).generalScore)
		return -1;
	else
		return 0;
}

void sortScore(Stu stu[], int N)
{
	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);
}

// 4、output the N student's general information
void printOut(Stu stu[], int N)
{
	printf("\n according to generaScore output student's information \n");
	for (int i = 0; i < N; i++)
	{
		printf("第%d名信息 学号：%s	姓名:%s		总成绩:%4.2f分\n", i + 1, &(stu[i].number[0]), &(stu[i].name[0]), stu[i].generalScore);
	}
}

// 5、compute the mean of every subject
void computeMean(Stu stu[], int N)
{
	// define the sum of every subject score
	float sumDailyScore = 0; 
	float sumFinalScore = 0;
	float sumGeneralScore = 0;
	
	printf("\n compute the mean of subject\n");
	for (int i = 0; i < N; i++)
	{
		sumDailyScore = sumDailyScore + stu[i].dailyScore;
		sumFinalScore = sumFinalScore + stu[i].finalScore;
		sumGeneralScore = sumGeneralScore + stu[i].generalScore;
	}

	printf("means of dailyScore: %4.2f \n", sumDailyScore / N);
	printf("means of finalScore: %4.2f \n", sumFinalScore / N);
	printf("means of generalScore: %4.2f \n", sumGeneralScore / N);
}

// 6、compute the variance of every subject
void computeVariance(Stu stu[], int N)
{
	// accroding to the fifth step
	float sumDailyScore = 0;
	float sumFinalScore = 0;
	float sumGeneralScore = 0;

	printf("\n compute the variance of subject\n");
	for (int i = 0; i < N; i++)
	{
		sumDailyScore = sumDailyScore + stu[i].dailyScore;
		sumFinalScore = sumFinalScore + stu[i].finalScore;
		sumGeneralScore = sumGeneralScore + stu[i].generalScore;
	}


	// declaration of related variables
	float sumDailyVariance = 0;
	float sumFinalVariance = 0;
	float sumGeneralVariance = 0;

	for (int i = 0; i < N; i++)
	{
		sumDailyVariance = sumDailyVariance + (stu[i].dailyScore - (sumDailyScore / N))*(stu[i].dailyScore - (sumDailyScore / N));
		sumFinalVariance = sumFinalVariance + (stu[i].finalScore - (sumFinalScore / N))*(stu[i].finalScore - (sumFinalScore / N));
		sumGeneralVariance = sumGeneralVariance + (stu[i].generalScore - (sumGeneralScore / N))*(stu[i].generalScore - (sumGeneralScore / N));
	}
	printf("variance of dailyScore: %4.2f \n", sumDailyVariance / N);
	printf("variance of finalScore: %4.2f \n", sumFinalVariance / N);
	printf("variance of generalScore: %4.2f \n", sumGeneralVariance / N);

}