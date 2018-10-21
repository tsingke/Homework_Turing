#define _CRT_SECURE_NO_DEPRECATE	//确保fscanf、fprintf可用，宏定义后无';'
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<cstdio>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int num=0;  //学生人数 

struct stu_info									
{
	char StudentID[20];		//学号
	char Name[20];			//姓名
	int daily_score;		//平时成绩
	int exp_score;			//实验成绩
	int final_score;		//期末成绩
	double score;			//最终成绩	double 出错，用%f存
	int rank;				//名次
}Student[100];									

void stu_info_view()  //学生信息预览
{
	cout << "总人数 ：  6" << endl;
	cout << "学号\t\t姓名\t平时成绩    实验成绩\t    期末成绩\t    最终成绩\t排名" << endl;
	for (int i = 0; i < 6; i++) //从0始
	{
		printf("%10s\t%s\t   %d\t\t%d\t%10d\t%10.2f\t%d\n", Student[i].StudentID, Student[i].Name, Student[i].daily_score, Student[i].exp_score, Student[i].final_score, Student[i].score, Student[i].rank);
	}
}

//F1从文件data.txt中读取所有学生成绩信息	
void readdata_txt()
{
	printf("\n-------Step1: 从文件中读取学生信息--------\n");
	FILE *fp = NULL;
	int i = 0;
	//int num = 0;
	fp = fopen("data.txt", "r");
	//1.获取学生数目
	if (fp != NULL)
	{
		fscanf(fp, "%d", &num);
	}
	else
	{
		printf("failed to open the info file\n");
		getchar();
	}
	printf("学生数目为:%d\n", num);
	//getchar();

	//2.给所有学生分配存储空间
	//stu = malloc(count * sizeof(SS));

	//3.读取每条学生的信息
	cout << "文件中学生信息如下：" << endl;
	while ((!feof(fp)) && (i < num))
	{

		//读入文件数据到内存	
		fscanf(fp,"%s%s%d%d%d\n", (Student[i].StudentID), (Student[i].Name), &Student[i].daily_score, &Student[i].exp_score,&Student[i].final_score);
		//输出原始学生信息
		printf("* 学号：%s	姓名:%s	平时成绩：%d分	实验成绩：%d分	期末成绩:%d分\n", (Student[i].StudentID), (Student[i].Name), Student[i].daily_score, (Student[i].exp_score),Student[i].final_score);
		i++;
	}
	fclose(fp);
}

//F2根据学生成绩信息计算出学生成绩排名。
//计算单个学生最终成绩
double calc_stu_final_score(stu_info stu)
{
	double score = 0;
	score = stu.daily_score * 0.2 + stu.exp_score * 0.2 + stu.final_score * 0.6;//***pc-calc无括号***
	return score;
}
//计算全部学生最终成绩
void calc_all_stu_final_score()
{
	for (int i = 0; i < 6; i++) 
	{
		Student[i].score = calc_stu_final_score(Student[i]);
	}
}
//对所有学生进行排名
void sort_all_stu_rank()
{	
	for (int i = 0; i < 6; i++)
	{
		Student[i].rank = 1;
		for (int j = 0; j < 6; j++)
		{
			if (Student[i].score < Student[j].score)
			{
				Student[i].rank++;
			}
		}
	}
}

//F3按学号查找学生成绩信息
void search_stu(string str)
{
	int flag = 0;
	for (int i = 0; i < 6; i++) 
	{
		if (Student[i].StudentID == str) 
		{
			cout << "        学号       姓名        平时成绩     实验成绩   期末成绩   最终成绩    排名" << endl;
			printf("%15s %10s %10d %10d %10d %13.2f%10d\n\n\n", Student[i].StudentID, Student[i].Name, Student[i].daily_score, Student[i].exp_score, Student[i].final_score, Student[i].score, Student[i].rank);
			flag = 1;
		}
	}
	if (flag == 0) cout <<" 查询不到该学生，请重新输入" << endl;
	//后续添加强制退出

}

//F4统计出该课程成绩的均值和方差，并对成绩分布简要分析
void calc_mean_variance_and_analyze()
{
	printf("\n		****** 所有学生的成绩分布情况 ******\n");
	double daily_score_mean = 0, daily_score_variance = 0;			 
	double exp_score_mean = 0, exp_score_variance = 0;	 
	double final_score_mean = 0, final_score_variance = 0;				
	double score_mean = 0, score_variance = 0;						 
	double sum = 0;
	for (int i = 1; i <= 4; i++) 
	{   //i == 1 时，计算平时成绩的均值/方差；i == 2时，计算实验成绩的均值/方差 ...
		for (int j = 0; j < 6; j++) 
		{
			if (i == 1) sum += Student[j].daily_score;  //计算各项成绩总和
			if (i == 2) sum += Student[j].exp_score;
			if (i == 3) sum += Student[j].final_score;
			if (i == 4) sum += Student[j].score;
		}
		if (i == 1) 
		{
			daily_score_mean = sum / (1.0 * 6);  //计算平时成绩均值、方差
			for (int j = 0; j < 6; j++) 
			{
				daily_score_variance += pow(fabs(Student[j].daily_score - daily_score_mean), 2)/6;  //计算方差
			}
		}
		if (i == 2) 
		{
			exp_score_mean = sum / (1.0 * 6);	//计算实验成绩均值、方差
			for (int j = 0; j < 6; j++) 
			{
				exp_score_variance += pow(fabs(Student[j].daily_score - exp_score_mean), 2)/ 6;
			}
		}
		if (i == 3) 
		{
			final_score_mean = sum / (1.0 * 6);	//计算期末成绩均值、方差
			for (int j = 0; j < 6; j++)
			{
				final_score_variance += pow(fabs(Student[j].daily_score - final_score_mean), 2)/ 6;
			}
		}
		if (i == 4) 
		{
			score_mean = sum / (1.0 *6);	//计算最终成绩均值、方差
			for (int j = 0; j < 6; j++) 
			{
				score_variance += pow(fabs(Student[j].daily_score - score_mean), 2) / 6;
			}
		}
		sum = 0; //再初始化为0；
	}
	cout << "      平时成绩      实验成绩     期末成绩     最终成绩" << endl;
	printf("均值：%10.2f %10.2f %10.2f %10.2f\n", daily_score_mean, exp_score_mean, final_score_mean, score_mean);
	printf("方差：%10.2f %10.2f %10.2f %10.2f\n\n\n", daily_score_variance, exp_score_variance, final_score_variance, score_variance);
	//分析成绩：
	string str;
	ifstream readFile_2;			 //定义一个读文件对象
	readFile_2.open("Analysis_score.txt");  //打开需要读出的文件
	readFile_2 >> str;				 //读取分析结果
	readFile_2.close();				 //关闭文件
	int n = 0;
	printf("输入0查看现有分析情况：\t输入1修改分析\n");
	cin >> n;
	if (n == 0) cout << str << endl;
	else 
	{
		ofstream writeFile_2;				//定义一个写文件对象
		writeFile_2.open("Analysis_score.txt");	//打开需要写入的文件
		printf("请修改分析结果：\n");
		cin >> str;
		writeFile_2 << str;					//将str的内容写进去
		printf("\n修改成功\n");
		writeFile_2.close();				
	}
}
