/*************************************************
* Head File   : SCORE.h
* File Usage  : 学生管理系统头文件
* Create Time : 2018-9-2/17:25
/**************************************************/
#define _CRT_SECURE_NO_WARNINGS
#ifndef __SCORE_H__
#define __SCORE_H__


#include <stdio.h>

/*----------------------------------*
	Function Declaration
*-----------------------------------*/

typedef struct
{
	char number[10];  //学号
	char name[10];    //姓名
	float dailyScore;   //平时成绩
	float expScore;  //实验成绩
	float finalScore;   //期末成绩
	float generalScore; //总评成绩

}SS;


/*---------------函数声明-------------------*/

//1.读取学生基本数据
void readData(SS stu[], int N);
SS* readDataFromFile(int *N);

//2.计算N个学生的总评成绩
void calcuScore(SS stu[], int N);


//3.根据总评成绩排名
void sortScore(SS stu[], int N);


//4.按照一定的格式输出N个学生的完整信息
void printOut(SS stu[], int N);

//5.根据学号查询学生信息
void searchScore(SS stu[]);

//6.计算学生成绩的均值和方差,并做出简要分析
void average(SS stu[], int N);
void variance(SS stu[], int N);
#endif
