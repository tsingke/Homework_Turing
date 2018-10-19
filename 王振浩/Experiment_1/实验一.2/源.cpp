//# include <iostream>
//# include <string>
//# include <fstream>
//# include <stdlib>
#include <stdio.h>
# include "math.h"
# include <string.h>

#include <stdlib.h>

#include <windows.h>

//#include "score.h"


typedef struct
{
	char id[10];
	char name[20];
	double fscore;  //平时成绩
	double escore;  //实验成绩
	double lscore;  //期末成绩
	double tscore;  //总成绩

}SS;





//读入学生成绩信息


//从文件中读取学生信息
SS*Readfile(int *N)
{
	SS *stu;  //定义SS类型的指针stu
	FILE *fp = NULL;//定义一个指向文件的指针
	int count;
	int index = 0;

	fp = fopen("data.txt", "r");  //用fopen以只读的方式打开文件data，并让指针fp指向文件


	if (fp = NULL)
	{
		printf("error");  //如果指针fp指向空，那么文件打开失败
		getchar();
	}
	else
	{

		fscanf(fp, "%d", &count);  //文件成功打开，则将指针指向的第一个正数赋值给变量count
		*N = count;
	}

	printf("学生的人数为：%d\n", count);
	getchar();

	stu = (SS*)malloc(count * sizeof(SS));//动态分配空间


										  //读取每个同学的信息
	while ((!feof(fp)) && (index < count))
	{
		//读入文件数据到内存
		fscanf(fp, "%s%s%lf%lf%lf", (stu[index].id, stu[index].name, stu[index].fscore, stu[index].escore, stu[index].lscore));
		//输出读入内存的学生信息
		printf("学号：%s    姓名：%s    平时成绩：%lf    实验成绩：%lf     期末成绩：%lf", stu[index].id, stu[index].name, stu[index].fscore, stu[index].escore, stu[index].lscore);
		index++;

	}


	fclose(fp);
	return stu;  //??
}


//计算学生的总成绩
void Lscore(SS stu[], int N)
{
	int i = 0;
	//	float p = 0.2;
	//float q = 0.6;
	for (i = 0; i < N; i++)
	{
		stu[i].tscore = 0.2 *stu[i].fscore + 0.2*stu[i].escore + 0.6*stu[i].lscore;
		printf("学号：%s    姓名：%s    总成绩：%4.2lf", stu[i].id, stu[i].name, stu[i].tscore);
	}

	printf("学生总成绩计算完毕\n\n");
}



int Sort(SS stu[], int N)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < N; i++)
		for (j = i + 1; j < N; j++)
		{
			if (stu[i].tscore < stu[j].tscore)
			{
				k = i;

				strcpy(stu[i].id, stu[j].id);
				strcpy(stu[i].name, stu[j].name);
				stu[i].fscore = stu[j].fscore;
				stu[i].escore = stu[j].escore;
				stu[i].lscore = stu[j].lscore;
				stu[i].tscore = stu[j].tscore;
				strcpy(stu[j].id, stu[k].id);
				strcpy(stu[j].name, stu[k].name);
				stu[j].fscore = stu[k].fscore;
				stu[j].escore = stu[k].escore;
				stu[j].lscore = stu[k].lscore;
				stu[j].tscore = stu[k].tscore;

			}
		}
	for (i = 0; i < N; i++)
	{
		printf("学号：%s    姓名：%s    平时成绩：%lf    实验成绩：%lf   期末成绩：%lf    总成绩：%4.2lf  \n  ", stu[i].id, stu[i].name, stu[i].fscore, stu[i].escore, stu[i].lscore, stu[i].tscore);

	}
	return 0;
}


int main()
{
	int N = 0;
	SS *pstu = NULL;  //结构体数组？？

	pstu = Readfile(&N);
	Lscore(pstu, N);
	Sort(pstu, N);


	free(pstu);

	system("pause");  //停顿成绩作用

	return 0;

}