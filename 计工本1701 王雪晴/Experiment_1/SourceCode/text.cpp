#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#define  SIZE  10
#define ERROR 0
#define OK 1
int main()
{
	int calculate(int a, int b, int c);
	int sort(int m);

	FILE *fp = NULL;
	int a[10];
	int i = 0;
	typedef struct 
	{
		char number[10];  
		char name[10];    
		float s1;   
		float s2;  
		float s3;   
		float s4; 

	}SS;
	fp=fopen("data.h", "r");
	if (!fp)
	{
		printf("error");
		return 0;
	}
	else
	{
		while (!feof(fp))
		{
			if(fscanf(fp, "%s%s %f%f%f\n", (&stu[i].number), (&stu[i].name), &stu[i].s1, &stu[i].s2, &stu[i].s3)!=1);
			printf("* %s	成绩1：%4.2f分	成绩2：%4.2f分	成绩3:%4.2f分\n", (stu[i].number), stu[i].s1, stu[i].s2, stu[i].s3);
			break;
			i++;
			fgetc(fp);
		}

	}

}