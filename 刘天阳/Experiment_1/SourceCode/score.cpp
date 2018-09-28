#include "score.h"
#include<iostream>
using namespace std;

score::score()
{
}
score::~score()
{
}
SS* score::readDataFromFile(int *N)
{
	cout << "正在读取学生信息中" << endl;
	SS*stu;

	FILE *fp = NULL;
	int count = 0;
	int index = 0;
	fp = fopen("data.txt", "r");
	//获取学生数目
	if (fp != NULL)
	{
		fscanf(fp, "%d", &count);
		*N = count;
	}
	else
	{
		cout << "打开文件失败" << endl;
		getchar();
	}
	cout << "学生数目为:" << count << endl;
	getchar();
	
	//给所有学生分配存储空间
	stu = (SS*)malloc(count *sizeof(SS));

	//读取每条学生的信息
	while ((!feof(fp)) && (index < count))
	{
		//读入文件数据到内存
		fscanf(fp, "%s%s%f%f\n", stu[index].number, stu[index].name, &stu[index].dailyScore, &stu[index].finalScore);
        index++;
	}
	for (int i = 0; i < count; i++)
	{

		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.8*stu[i].finalScore;
		printf("* 学号：%s	姓名:%s	  平时成绩:%4.2f分   期末成绩:%4.2f分   总成绩:%4.2f分\n", (stu[i].number), (stu[i].name), stu[i].dailyScore,stu[i].finalScore,stu[i].generalScore);

	}
    fclose(fp);
	return stu;
}

int cmpBigtoSmall(const void *a, const void *b)
{
	SS *aa = (SS *)(a);
	SS *bb = (SS *)(b);
	if ((*aa).generalScore < (*bb).generalScore)  return 1;
	else if ((*aa).generalScore >(*bb).generalScore)  return -1;
	else
		return 0;
}

void score::SortScore(SS stu[], int N)
{
	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);
	cout << "以下是重新排名后的学生成绩" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "第"<<i+1<<"名信息   " << "学号：" <<stu[i].number << "   姓名:" << stu[i].name << "   总成绩 :" << stu[i].generalScore<< endl;
	}
}
void score::Search_stu(SS stu[], int N,char* search_num)
{
  for (int i = 0; i < N; i++)
	{
	  cout << stu[i].number<<endl;
     if (strcmp(stu[i].number, search_num) == 0)
	  {
		  cout << "成功找到该学生" << endl;
		  cout << "学号：" << stu[i].number << "   姓名:" << stu[i].name << "   平时成绩 :" << stu[i].dailyScore << "   期末成绩 :" << stu[i].finalScore << "   总成绩 :" << stu[i].generalScore << endl;
		  return;
	  }
	}
	cout << "未找到该学生" << endl;
}
void score::Get_mean_variance(SS stu[], int N)
{
	float mean = 0;
	float variance = 0;
	float sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += stu[i].generalScore;
	}
	mean = sum / N;
	for (int i = 0; i < N; i++)
	{
		variance += (stu[i].generalScore - mean) *(stu[i].generalScore - mean);
	}
	variance = variance / N;
	cout << "总成绩均值是:" << mean << endl;
	cout << "总成绩方差是:" << variance << endl;
}
SS* score::Get_Data()
{
	cout << "*****学生管理分析系统*****" << endl;
	cout << "      Tianyang Liu      " << endl;
	cout << "**************************" << endl;
	cout << "请选择读取信息方法" << endl;
	cout << "1、从文件读取信息" << endl;
	cout << "2、手动输入输入信息" << endl;
	
	int i = 0;
	static int N = 0;
	SS *pstu = NULL;
    cin >> i;
	switch (i)
	{
	case 1:
		cout << "从文件中读取学生信息" << endl;
		pstu = readDataFromFile(&N);
		break;
	case 2:
		cout << "手动输入学生信息,本功能尚未完善" << endl;
		break;
	}
	return pstu;
}

int score::Show_Menu(SS stu[])
{
	cout << "************" << endl;
	cout << "具体功能" << endl;
	cout << "************" << endl;
	cout << "1、计算学生成绩排名" << endl;
	cout << "2、输入学号查找学生成绩" << endl;
	cout << "3、输出该课程成绩的均值和方差" << endl;
	cout << "0、退出" << endl;
	int i = 0;
	int N = 0;
	char number[10];
	SS *readstu = NULL;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "计算学生成绩排名中" << endl;
		SortScore(stu,6);
		break;
	case 2:
		cout << "请输入学生学号:";
		cin >> number;
		Search_stu(stu, 6, number);
		break;
	case 3:
		cout << "计算该课程成绩的均值和方差中" << endl;
		Get_mean_variance(stu, 6);
		break;
	case 0:
		break;
	}
	return i;
	
}
