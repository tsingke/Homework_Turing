#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	char number[10];  //学号
	char name[10];  //姓名
	int ps;  //平时成绩
	int sy;  //实验成绩
	int qm;  //期末成绩
	float zp;  //最终成绩
	int mc;  //名次
}Student;
Student* readDataFromFile(int *N);
void count_s(Student stu[],int N);
void sort_s(Student stu[],int N);
int pm(const void *a, const void *b)
void pr(Student stu[],int N);
void ave_fangcha(Student stu[],int N);
int main()
{
	printf("******************************\n");
	printf("       学生成绩管理分析系统        \n");
	printf("******************************\n\n");
	int N=0;
	Student *stu=NULL;
	stu=readDataFromFile(&N);
	count_s(stu,N);
	sort_sstu,N);
	pr(stu,N);
	ave_fangcha(stu,N);
	free(stu);
	printf("\n");
	system("pause");
        return 0;
}