
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"



int main()
{
	int N = 0;        //学生总数
	SS  *pstu = NULL;    //结构体数组指针
	 //读取数据信息
	
	int choice;
	while (1)
	{
                           /*主菜单*/

		printf("\n\n******************************\n");
		printf("       学生成绩管理分析系统        \n");
		printf("******************************\n\n");

		printf("1.从文件data.txt中读取所有学生成绩信息\n");

		printf("2.根据学生成绩信息计算出学生成绩排名\n");

		printf("3.输入学号可查询某个学生的成绩信息\n");

		printf("4.统计出该课程成绩的均值和方差，并对成绩分布简要分析\n");

		printf("5.退出\n");

		printf("请选择(1-5):");

		scanf_s("%d", &choice);

		getchar();

		switch (choice)

		{

		case 1:

			pstu = readDataFromFile(&N);

			break;

		case 2:
			calcuScore(pstu, N);
			sortScore(pstu, N);
			printOut(pstu, N);
			break;

		case 3:

			searchScore(pstu);

			break;

		case 4:
			average(pstu, N);
			variance(pstu, N);
			

			break;


		case 5:

			exit(0);

			break;

		}

		

	}




	free(pstu);//释放动态内存空间

	printf("\n");
	system("pause");


	return 0;
}