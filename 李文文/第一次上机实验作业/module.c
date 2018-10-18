#include"module.h"
#include<stdio.h>
#include<stdlib.h> //包含exit()
#include<string.h>
//一、从文件data.txt中读入学生信息
Ss* ReadData(int *N)
{
	printf("读取学生信息\n");
	FILE *fp;
	errno_t err;	
	if ((err = fopen_s(&fp, "D:\\data.txt","r"))!=0)
	{
		printf("cannot open this file\n");
		exit(0);
	}
	int n=6;
	*N = n;
	printf("学生人数为：%d\n", n);
	Ss *S = (Ss*)malloc(n*sizeof(Ss));
	int i;
	i = 0;
	while ((!feof(fp))&& (i < n))
	{
		fscanf_s(fp,"%s%s%f%f", &S[i].num, &S[i].name, &S[i].gs, &S[i].fgs);
		i++;
	}
	
	fclose(fp);
	return S;
}

//二、根据学生成绩信息计算出学生成绩排名
void Sort(Ss S[] ,int n)
{
	//计算
	for (int j = 0; j < n; j++)
	{
		S[j].tgs = 0.2*S[j].gs + 0.8*S[j].fgs;
	}
	//排名
	int k,l,t, r = 0;
	Ss temp;
	for (k = 0; k < n - 1;k++)
	{
		t = k;
		for (l = 1; l < n; l++)
			if (S[l].tgs>S[t].tgs)
				t = l;
		if (t != k)
		{
			temp = S[t];
			S[t] =S[k];
			S[k] = temp;
			
		}
		S[k].ranking = k + 1;
	}
}

//三、输入学号查询某个学生的信息
void Search(char numb[20],Ss S[] ,int n)
{
	int i;
	for (i = 0;i < n;i++)
	{
		if (strcmp(S[i].num, numb)==0)
			printf("学号：%s\n姓名：%s\n平时成绩：%f\n期末成绩：%f\n总成绩：%f\n名次：%d\n", S[i].num, S[i].name, S[i].gs, S[i].fgs, S[i].tgs, S[i].ranking);

	}

}

//四 统计该课程成绩的均值和方差
float av(Ss S[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
		sum += S[i].tgs;
	float aver = sum / n;
	return aver;
}
float var(float aver, Ss S[], int n)
{
	float a;
	for (int i = 0; i < n; i++)
	{
		int t = 0;
		t += (S[i].tgs - aver)*(S[i].tgs - aver);
		a = t / n;
	}
	return a;
}
