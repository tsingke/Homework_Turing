#ifndef __SCORE_H__
#define __SCORE_H__
#include <stdio.h>
typedef struct
{
	char number[10];  //学号
	char name[10];  //姓名
	int ps;  //平时成绩
	int sy;  //实验成绩
	int qm;  //期末成绩
	float zp;  //最终成绩
	int mc;  //名次
}Student;
Student* readDataFromFile(int *N);
void count_s(Student stu[],int N);
void sort_s(Student stu[],int N);
int pm(const void *a, const void *b)
void pr(Student stu[],int N);
void ave_fangcha(Student stu[],int N);
#endif