#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"

int main()
{
	printf("----学生成绩管理分析系统------ \n");
	int N = 0;     
	SS  *pstu = NULL;    


	pstu = readDataFromFile(&N);
	calcuScore(pstu, N);//计算学生总成绩
	sortScore(pstu, N);//根据学生成绩排名
	printOut(pstu, N);//按照排名输出学生信息


	free(pstu);

	printf("\n");
	system("pause");


	return 0;
}