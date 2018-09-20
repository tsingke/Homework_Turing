#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"

int main()
{


	printf("******************************\n");
	printf("       学生成绩管理分析系统        \n");
	printf("******************************\n\n");
	int N = 0;        //学生总数

	SS  *pstu = NULL;    //结构体数组指针
	pstu = readDataFromFile(&N);

	printf("请输入学生数目:");
	scanf("%d", &N);
	readData(pstu, N);
	
    calcuScore(pstu, N);/*计算学生总成绩（总成绩 = 平时成绩 + 期末成绩--*/
    sortScore(pstu, N);/*根据学生成绩排名-*/
	printOut(pstu, N);/*按照排名输出学生信息-*/
    free(pstu);//释放动态内存空间

	printf("\n");
	system("pause");


	return 0;
}