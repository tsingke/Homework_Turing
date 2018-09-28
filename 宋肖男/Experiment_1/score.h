/*************************************************
* Head File   : SCORE.h
* File Usage  : 学生管理系统头文件
* Create Time : 2018-9-13/17:25
/**************************************************/

#ifndef __SCORE_H__
#define __SCORE_H__

#include<iostream>
#include <string>
using namespace std;

//学生结构体
struct SS
{
	long number;  //学号
	char name[20];    //姓名
	float dailyScore;   //平时成绩
	float finalScore;   //期末成绩
	float generalScore; //总评成绩
	float text;//实验成绩
	int rank;//名次
};

//成员函数

//读取学生信息
//void readData(SS stu[], int N);//s输入读取
SS* readDataFromFile(int N);//文件读取
//计算学生的总评成绩
void calcuScore(SS stu[], int N);
//排名
void sortScore(SS stu[], int N);
//输出学生的完整信息
void printOut(SS stu[], int N);
//写入Excel文档
void putintoExcel(SS stu[], int N);
//输入学号即可查询功能
void inSpect(SS stu[], int N);
//求方差及平均值
void calculate(SS stu[], int N);

#endif