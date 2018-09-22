/*************************************************
** 功能 : 学生成绩管理系统
** 作者 : Qingke Zhang/tsingke@sdnu.edu.cn
** 版本 : 2018-9-2 / 17:13
** 版权 : GNU General Public License(GNU GPL)
/**************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"


/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{
    int i, j, aver, var, k = 1;
    int sum = 0, a = 0;
    string s;
    Student t;
    void calcuScore(SS stu[], int N); //1.计算N个学生的总评成绩及排名
	void searchScore(SS stu[], int N); //2.查询
    void printOut(SS stu[], int N);//3.计算均值和方差
	return 0;
} 