/*防止重复包含*/
#ifndef _MODULE_INCLUDE_H
#define _MODULE_INCLUDE_H

#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
typedef struct Stu
{
	char num[20];
	char name[10];
	float gs;//平时成绩
	//float egs;实验成绩
	float fgs;//期末成绩
	float tgs;//总成绩
	int ranking;
}Ss;

Ss *ReadData(int *N);
void Sort(Ss S[], int n);
void Search(char numb[20],Ss S[],int n);
//计算平均成绩和方差
float av(Ss S[], int n);
float var(float aver, Ss S[], int n);

#endif