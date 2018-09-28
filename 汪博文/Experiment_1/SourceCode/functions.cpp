#include "stdafx.h"
#include "stdlib.h"
#include "functions.h"
#define number 6 
struct Student
{
	int student_number = 0;
	char name[10] = { '\0' };
	float score1 = { 0 };
	float score2 = { 0 };
	float score3 = { 0 };
	float score4 = { 0 };
}stu[number];

int read_data(const char data_name[10])
{

	int i, size;

	FILE *fp = NULL;
	errno_t err = 0;
	if ((err = fopen_s(&fp, data_name, "r")) != 0)
	{
		printf("cann't open file\n");
		exit(0);
	}

	fscanf(fp, "%d", &size);

	for (i = 0; i < size; i++)
	{
		fscanf(fp, "%d %s %f %f %f", &stu[i].student_number, &stu[i].name, &stu[i].score1, &stu[i].score2, &stu[i].score3);

	}
	for (i = 0; i < size; i++)
	{
	printf("%d %s %.2f %.2f %.2\n", stu[i].student_number, stu[i].name, stu[i].score1, stu[i].score2, stu[i].score3);
	}
	fclose(fp);
	return 0;

}


int sort()
{
	struct Student stu_s;
	int i;
	for (i = 0; i < number; i++)
	{
		stu[i].score4 = 0.2*stu[i].score1 + 0.2*stu[i].score2 + 0.6*stu[i].score3;
	}

	for (i = 0; i < number - 1; i++)
	{

		if (stu[i].score4 < stu[i + 1].score4)
		{
			stu_s = stu[i];
			stu[i] = stu[i + 1];
			stu[i + 1] = stu_s;
		}
		else
			continue;
	}

	for (i = 0; i < number; i++)
	{
		printf("%d %s %.2f %.2f %.2f %.2f\n", stu[i].student_number, stu[i].name, stu[i].score1, stu[i].score2, stu[i].score3, stu[i].score4);
	}
	return 0;
}

int search()
{
	int i, num;
	printf("请输入要查询的学号:\n");
	scanf("%d", &num);
	for (i = 0; i < number; i++)
	{
		if (stu[i].student_number == num)
		{
			printf("学号         姓名   平时成绩   实验成绩   期末成绩   总成绩\n");
			printf("%d  %s %7.2f      %.2f      %.2f      %.2f\n", stu[i].student_number, stu[i].name, stu[i].score1, stu[i].score2, stu[i].score3, stu[i].score4);
		}
		else
			continue;
	}
	return 0;
}

int describe()
{
	int i;
	float sum_a4 = 0, sum_v4 = 0,sum_a1 = 0,sum_a2 = 0,sum_a3 = 0,sum_v1 = 0,sum_v2 = 0,sum_v3 = 0;
	float ave1,ave2,ave3,ave4;
	float var1,var2,var3,var4;
	for (i = 0; i < number; i++)
	{
		sum_a1 = stu[i].score1 + sum_a1;
		sum_a2 = stu[i].score2 + sum_a2;
		sum_a3 = stu[i].score3 + sum_a3;
		sum_a4 = stu[i].score4 + sum_a4;
	}
	ave1 = sum_a1 / number;
	ave2 = sum_a2 / number;
	ave3 = sum_a3 / number;
	ave4 = sum_a4 / number;

	for (i = 0; i < number; i++)
	{
		sum_v1 = (stu[i].score1 - ave1)*(stu[i].score1 - ave1) + sum_v1;
		sum_v2 = (stu[i].score2 - ave2)*(stu[i].score2 - ave2) + sum_v2;
		sum_v3 = (stu[i].score3 - ave3)*(stu[i].score3 - ave3) + sum_v3;
		sum_v4 = (stu[i].score4 - ave4)*(stu[i].score4 - ave4) + sum_v4;
	}

	var1 = sum_v1 / number;
	var2 = sum_v2 / number;
	var3 = sum_v3 / number;
	var4 = sum_v4 / number;

	printf("课程平时成绩的均值为:%.2f\n", ave1);
	printf("课程平时成绩的方差为:%.2f\n\n", var1);

	printf("课程实验成绩的均值为:%.2f\n", ave2);
	printf("课程实验成绩的方差为:%.2f\n\n", var2);

	printf("课程期末成绩的均值为:%.2f\n", ave3);
	printf("课程期末成绩的方差为:%.2f\n\n", var3);

	printf("课程总成绩的均值为:%.2f\n", ave4);
	printf("课程总成绩的方差为:%.2f\n", var4);
	return 0;
}