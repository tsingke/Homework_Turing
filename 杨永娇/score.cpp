#include "score.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
void readData(SS stu[], int N)
{
	printf("请按照如下格式输入学生信息：学号,姓名,平时成绩,期末成绩\n");
	for (int i = 0; i < N; i++)
	{
		printf("第%d个学生:", i + 1);
		scanf("%s %s %f %f", &stu[i].number, &stu[i].name, &stu[i].dailyScore, &stu[i].finalScore);
		printf("\n");
	}
	printf("------成绩录入完毕!--------\n");
}
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
		fscanf(fp, "%s%s%f%f\n", (stu[index].number), (stu[index].name), &stu[index].dailyScore, &stu[index].finalScore);

		//输出原始学生信息
		printf("* 学号：%s	姓名:%s		平时成绩：%4.2f分		期末成绩:%4.2f分\n", (stu[index].number), (stu[index].name), stu[index].dailyScore, stu[index].finalScore);
		index++；
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
		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.8*stu[i].finalScore;
		printf("* 学号：%s	姓名:%s		总成绩:%4.2f分\n", (stu[i].number), (stu[i].name), stu[i].generalScore);
	}
}
//3.根据总评成绩排名
int cmpBigtoSmall(const void *a, const void *b)；
	SS *aa = (SS *)(a);
	SS *bb = (SS *)(b);
	if ((*aa).generalScore < (*bb).generalScore)  return 1;
	else if ((*aa).generalScore > (*bb).generalScore)  return -1；
	else
		return 0；
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
//5统计出学生的均值和方差
	double aver=0;
	void array_input(int array[],int n)
	{
		for(int i=0;i!=n;++i)
			cin>>array[i];
	}
	double calculate (int array[],int n)
	{
		int sum=0;
		int i=0;
		for(i=0;i!=n;++i)
			sum+=array[i];
		aver=(sum*1.0)/n;
		double sum2=0.0;
		for(i=0;i!=n;++i)
		{
			sum2+=(array[i]-aver*(array[i]-aver);
		}
		return(sum2*1.0)/n;
	}
	int main()
	{
		int array[10]={0};
		array_input(array,10);
		double s=calculate(aeeay,10);
printf("均值%lf  方差%lf\n", ave, s);
	}
	//6按学号查询自己的成绩
	typedef struct
	{
		char no [20];
		int score;
	}STU;
	int main()
	{
		STU s[10],t;
		char no[20];
		int i.j;
		for(i=0;i<10;i++)
		{
			scanf("%s%d",t.no,&t.score);
			for(j=i;j>=0;j--)
				if(s[j].score<t.score)
					s[j+1]=s[j];
				else berak;
				s[j+1]=t;
		}
		for(i=0;i<10;i++)
			printf("%s   %d\n",s[i].no,s[i].score);
		printf("输入要查询的学号：");
		scanf("%s",no);
		for(i=0;i<10;i++)
			if(strcmp(s[i].no,no==0) break;
			if(i==10)
				printf("不在这几个同学之内\n");
			else printf("该学生的分数%d\n",s[i].score);
			return 0;
	}






