#pragma once
#include"stu.h"
#include<string.h>
#include<stdio.h>
void search(student*p)
{
	char s[20];
	int i;
	printf("输入学号并回车：");
	scanf("%s",&s);
	for(i=0;i<a;i++)
		if(strcmp(s,p[i].number)==0)
		{
			printf("%s %s %d %d %d\n",p[i].number,p[i].name,p[i].daily,p[i].expscore,p[i].finalscore);
			return;
		}
	if(i==a)printf("学号输入错误！\n");
}