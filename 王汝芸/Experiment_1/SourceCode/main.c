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




int main()
{
	printf("------------------------------\n");
	printf("       学生成绩管理分析系统        \n");
	printf("------------------------------\n\n");


	/*-1.变量初始化-*/
	int N = 0;        //学生总数

	SS  *pstu = NULL;    //结构体数组指针

	pstu = readDataFromFile(&N);

	/*-3.计算学生总成绩-*/
	calcuScore(pstu, N);

	/*-4.根据学生成绩排名-*/
	sortScore(pstu, N);

	/*-5.按照排名输出学生信息-*/
	printOut(pstu, N);

	/*-6.计算成绩的均值和方差*/
	Ave_Variance(pstu, N);

	/*-7.输入学号查成绩*/
	
	searchScore(pstu);


	free(pstu);//释放动态内存空间

	printf("\n");
	system("pause");


	return 0;
}