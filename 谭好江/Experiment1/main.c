#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"
//#include"score.c"



int main()
{
	int N = 0;        //学生总数
	SS  *pstu = NULL;    //结构体数组指针
	//读取数据信息

		/*主菜单*/

		printf("\n\n******************************\n");
		printf("       学生成绩管理分析系统        \n");
		printf("******************************\n\n");

		printf("读取所有学生信息\n");
            pstu = readDataFromFile(&N);
		
		
		printf("计算学生成绩排名\n");
            calcuScore(pstu, N);
			sortScore(pstu, N);
			printOut(pstu, N);
		
			
		printf("输入学号查询成绩\n");
            searchScore(pstu);
		
		printf("\n统计出该课程成绩的均值和方差\n");
            average(pstu, N);
			variance(pstu, N);
		



	free(pstu);//释放动态内存空间

	printf("\n");
	system("pause");


	return 0;
}