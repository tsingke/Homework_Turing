/*************************************************
* Head File   : SCORE.h
* File Usage  : 学生管理系统头文件
* Create Time : 2018-9-2/17:25
/**************************************************/

#ifndef __SCORE_H__
#define __SCORE_H__


#include <stdio.h>

/*----------------------------------*
    Function Declaration
*-----------------------------------*/

struct Student
{
    string sid;   //学号
    string name;
    int score[4];   //四种成绩
    int ran;    //名次
};
Student stu[6];


/*---------------函数声明-------------------*/


//1.计算N个学生的总评成绩及排名
void calcuScore(SS stu[], int N);


//2.查询
void searchScore(SS stu[], int N);


//3.计算均值和方差
void printOut(SS stu[], int N);




#endif

