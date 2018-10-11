#include"score.h"
#include<math.h>
#include<stdlib.h>
#include<stdio.h>


void readData(S stu[], int n)
{
	printf("请输入学生信息");
	for (int i = 0; i < n; i++)
	{
		printf("第%d个学生"，i+1);
		scanf("%s %s %f %f", &stu[i], NO, dailyScore, finalScore);
		printf("\n");
	}
	printf("成功录入成绩\n");
}
S* readDataFile(int *n)
{
	S *stu;
	FLIE *fp = NULL;
	int count = 0;
	int num = 0;

	fp = fopen("data.txt"."r");
	if (fp != NULL)
	{
		fscanf(fp, "%d", &count);
		*n = count;
	}
	else
	{
		printf("failed to open the info file\n")
			getchar();
	}

	printf("学生数目为:%d\n", count);
	getchar();


	//2.给所有学生分配存储空间
	stu = (S*)malloc(count * sizeof(S));


	//3.读取每条学生的信息
	while ((!feof(fp)) && (num < count))
	{

		//读入文件数据到内存	
		fscanf(fp, "%s%s%f%f\n", (stu[num].NO), (stu[num].name), &stu[num].dailyScore, &stu[num].finalScore);

		//输出原始学生信息
		printf("* 学号：%s	姓名:%s		平时成绩：%4.2f分		期末成绩:%4.2f分\n", (stu[num].number), (stu[num].name), stu[num].dailyScore, stu[num].finalScore);

		num++;


	}

	fclose(fp);

	return stu;
}

//2.计算N个学生各自的总评成绩
void addScore(S stu[], int n)
{


	printf("\n\n------第二步: 计算每个学生的总评成绩--------\n\n");

	for (int i = 0; i < n; i++)
	{

		stu[i].totalScore = 0.2*stu[i].dailyScore + 0.8*stu[i].finalScore;
		printf("* 学号：%s	姓名:%s		总成绩:%4.2f分\n", (stu[i].number), (stu[i].name), stu[i].generalScore);

	}
}


//3.根据总评成绩排名
int cmpBigtoSmall(const void *a, const void *b)
{

	SS *aa = (SS *)(a);
	SS *bb = (SS *)(b);



	if ((*aa).generalScore < (*bb).generalScore)  return 1;

	else if ((*aa).generalScore >(*bb).generalScore)  return -1;

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

		printf("第%d名信息 学号：%s	姓名:%s		总成绩:%4.2f分\n", i + 1, &(stu[i].number[0]), &(stu[i].name[0]), stu[i].generalScore);
	}


}

	}
}