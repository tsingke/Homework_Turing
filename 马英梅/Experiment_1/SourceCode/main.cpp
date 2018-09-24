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


	printf("******************************\n");
	printf("       学生成绩管理分析系统        \n");
	printf("         Qingke Zhang            \n");
	printf("******************************\n\n");


	/*-1.变量初始化-*/
	int N = 0;      //学生总数



	SS  *pstu = NULL;    //结构体数组指针
	


	//2.选择一种读取学生信息的方法(手动输入法,或者从文件读取到内存)
	//2.1 读取文件法

	pstu = readDataFromFile(&N);


	/*2.2手动输入学生信息法-*/
	//printf("请输入学生数目:");
	//scanf("%d", &N);
	//readData(pstu, N);


	/*-3.计算学生总成绩（总成绩 = 平时成绩 + 期末成绩--*/
	calcuScore(pstu, N);

	/*-4.根据学生成绩排名-*/
	sortScore(pstu, N);

	/*-5.按照排名输出学生信息-*/
	printOut(pstu, N);


	/*-6.求出N个学生的平均成绩和方差*/
	Aver_Variance(pstu, N);


	/*-7.查询某个学生的成绩情况*/
	SearchScore(pstu,N);





	free(pstu);//释放动态内存空间

	printf("\n");
	system("pause");


	return 0;
}

