/*************************************************
* Head File   : SCORE.h
* File Usage  : 学生管理系统头文件
/**************************************************/
#pragma once
#ifndef __SCORE_H__
#define __SCORE_H__
#include<iostream>
#include<fstream>
/*-------------定义结构体----------------------*/
struct Students
{
	char number[20];  //学号
	char name[30];    //姓名
	float dailyScore;   //平时成绩
	float expriScore;//实验成绩
	float finalScore;   //期末成绩
	float generalScore; //总评成绩
};
/*---------------函数声明-------------------*/

int readData();//手动输入学生信息
int readDataFromFile();//从文件中读取
int calcuScore();//计算总评成绩
float sort(int N);//将学生成绩从高到低排名
int printOut();//按一定格式打印学生信息
int  variance();//计算班级成绩方差
int analyse();//成绩分析
int search();//输入学号查询学生信息
#endif

