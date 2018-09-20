#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"stu.h"
FILE* openfile(FILE*fp)
{
	char filename[10];
	printf("请输入文件名：");
	scanf("%s", filename);
	if ((fp=fopen(filename,"r+"))==NULL)
	{
		printf("cannot open this file\n");
		exit(0);
	}
	return fp;
}
FILE* closefile(FILE*fp)
{
	fclose(fp);
	return fp;
}
student* input(FILE*fp)
{
	fscanf(fp, "%d", &a);
	printf("共%d个学生\n", a);
	student* S = NULL;
	S = (student*)malloc(sizeof(student)*a);
	for (int i = 0; i < a; i++)
	{
		fscanf(fp,"%s %s %d %d %d",&S[i].number,&S[i].name,&S[i].daily,&S[i].expscore,&S[i].finalscore);
		printf("%s %s %d %d %d\n",S[i].number,S[i].name,S[i].daily,S[i].expscore,S[i].finalscore);
	}
	return S;
}