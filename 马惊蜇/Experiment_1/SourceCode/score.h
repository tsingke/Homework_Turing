/*************************************************
* Head File   : SCORE.h
* File Usage  : 学生管理系统头文件
* Create Time : 2018-9-21/17:25
/**************************************************/

#ifndef __SCORE_H__
#define __SCORE_H__
#define _CRT_SECURE_NO_WARNINGS；

#include <stdio.h>

/*----------------------------------*
		Function Declaration
*-----------------------------------*/

typedef struct
{
	char num[10];
	char name[10];
	float dayscr;
	float expscr;
	float finscr;
	float genscr;

}SS;

/*--------------------Functions Declaration-------------------*/


//void ReadData(SS stu[], int N);
SS *ReadDataFromFile(int *N);

void CalcuGenscr(SS stu[], int N);

void SortScore(SS stu[], int N);

void PrintOut(SS stu[], int N);

void Ave_Variance(SS stu[], int N);

void SearchScore(SS stu[]);



#endif