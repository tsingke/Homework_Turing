#pragma once
#ifndef SCORE
#define SCORE



#include<stdio.h>




typedef struct
{
	char NO[15];
	char name[20];
	float dailyscore;
	float finalscore;
	float totalscore;
}S;
#endif // !SCORE

void readData(S stu[], int n);
S* readDataFile(int *n);
void  addScore(S stu[], int n);
void  sortScore(S stu[], int n);
void  putOut(S stu[], int n);
