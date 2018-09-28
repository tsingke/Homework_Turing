#include <stdio.h>
#include <stdlib.h>
#include "score.h"
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