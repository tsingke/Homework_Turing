#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Head.h"
int main()
{
	printf("*************************\n");
	printf("       学生管理系统       \n");
	printf("**************************\n");
	int N = 0;
	SS *pstu = NULL;
	pstu = readDataFromFile(&N);
	calcuScore(pstu, N);
	sortScore(pstu, N);
	printOut(pstu, N);
	free(pstu);
	printf("\n");
	system("pause");
	return 0;
}