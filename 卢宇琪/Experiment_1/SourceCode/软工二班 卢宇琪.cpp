#include<stdio.h>
#include<math.h>
typedef struct//定义学生信息
{
	char name[6];
	char number[6];
	float dailyScore;//平时成绩
	float finalScore;//期末成绩
	float expScore;//实验成绩
	float sumScore;//总评成绩
}SS;
void readData(SS stu[])//录入学生成绩
{
	for (int i = 0; i < 6; i++)
	{
		printf("请按姓名，学号，平时成绩，期末成绩输入学生信息：\n");
		scanf("%s %s %f %f %f", &stu[i].name, &stu[i].number, &stu[i].dailyScore, &stu[i].finalScore,&stu[i].expScore);
		printf("\n");
	}
}
void calcuScore(SS stu[])//计算学生总成绩
{
	for (int i = 0; i < 6; i++)
	{
		stu[i].sumScore = 0.2*stu[i].dailyScore + 0.2*stu[i].expScore + 0.6*stu[i].finalScore;
    }
}
void rankScore(SS stu[])//计算学生排名
{
	int t;
	for (int i = 0; i < 6; i++)
	{
		int k = 1;
		for (int j = i + 1; j <= 6; j++)
			if (stu[j].sumScore < stu[i].sumScore)
				k = j;
		if (k != i)
		{
			t = stu[i].sumScore; stu[i].sumScore = stu[k].sumScore; stu[k].sumScore = t;
		}
	}
}
void Query_name()//按姓名查询学生信息
{
	int name;
	int j = 0;
	scanf("%s", &name);
	while(j<6)
	{
		if (name != stu[j].name)
			j++;
		else if
			printf("%s,%f,%f,%f\n", &stu[j].number, &stu[j].dailyScore; &stu[j].finalScore, %stu[j].sunScore);
	}
	printf("查询不到此信息\n");
}