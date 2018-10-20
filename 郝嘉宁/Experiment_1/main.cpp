#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "first homework.h"


int main()
{


	printf("------------------------------\n");
	printf("       学生成绩管理分析系统        \n");
	printf("------------------------------\n\n");


	/*-1.变量初始化-*/
	int N = 0;        //学生总数

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

	/*-6.计算成绩的均值和方差*/
	Ave_Variance(pstu, N);

	/*-7.输入学号查成绩*/

	searchScore(pstu);


	free(pstu);//释放动态内存空间

	printf("\n");
	system("pause");


	return 0;
}
