#include<stdio.h>
#include"module.h"
#include<stdlib.h> //包含exit()
#include<string.h>
int main()
{
	int N=0;
	Ss *S;
	S=ReadData(&N);	
	Sort(S,N);
	char numb[20];
	printf("请输入要查询的学生学号:\n");
	scanf_s("%s", &numb);
	Search(numb,N,S);
	int aver=av(S, N);
	printf("成绩的平均值为：%f\n",aver);
	int vari = var(aver, S, N);
	printf("成绩的方差为：%lf\n",vari);
	return 0;
}