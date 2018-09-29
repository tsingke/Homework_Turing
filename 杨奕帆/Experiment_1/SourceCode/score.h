/*************************************************
* Head File   : score.h
* File Usage  : 学生管理系统头文件
* Create Time : 2018-9-21/17:25
/**************************************************/

#ifndef __SCORE_H__
#define __SCORE_H__
#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*----------------------------------*
		Function Declaration(函数解释)
*-----------------------------------*/

typedef struct
{
	char num[10];
	char name[10];
	float dailyscore;    //平时成绩
	float expscore;		//实验成绩
	float finalscore;    //期末成绩
	float generalscore;   //总评成绩

}SS;

/*--------------------Functions Declaration-------------------*/


//void ReadData(SS stu[], int N);
SS *ReadDataFromFile(int *N);

void Calcugeneralscore(SS stu[], int N);

void SortScore(SS stu[], int N);

void PrintOut(SS stu[], int N);

void Ave_Variance(SS stu[], int N);

void SearchScore(SS stu[]);



#endif