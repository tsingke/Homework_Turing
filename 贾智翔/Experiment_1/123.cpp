#include<iostream.h>
#include<stdio.h>
#include <stdlib.h>
#include <windows.h>

main()
{
typedef struct student
{
		char number[10];
		char name[10];
		int dailyScore;
	    int experimentalScore;
		int finalScore;
		double score;
		int place;
}SS;
}


SS* readDataFromFile(int *N)
{    
 cout<<                             ------ 学生的成绩信息--------;
	SS *stu;
	FILE *fp = NULL;
	int m = 0;
	int i = 0;
	fp = fopen("data.txt", "r");
	if (fp != NULL)
	{
		fscanf(fp, "%d", &m);
		*N = m;
	}
	else
	{
		printf("failed to open the info file\n");
		getchar();
	}
	printf("学生数目为:%d\n", m);
	getchar();
	stu = (SS*)malloc(count * sizeof(SS);
	while ((!feof(fp)) && (i < m))
	{	
		fscanf(fp, "%s%s %f%f%f\n", (stu[i].number), (stu[i].name), &stu[i].dailyScore, &stu[i].expScore, &stu[i].finalScore);
            cout<<stu[i].number<<stu[i].name<<stu[i].dailyScore<<stu[i].expScore<<stu[i].finalScore;
               i++;
	}
}
void jscore(ss stu[],int n)
{
    for(int i=0;i<n;i++)
	{
		stu[i].score=stu[i].finalScore*0.6+stu[i].dailyScore*0.2+stu[i].expScore*0.2
	}
	while((m<0)&&(flag==1))
	{
	flag==0;
	for(i=0;i<m;i++)
		if(stu[i].score<stu[i+1].score)
		{
		flag==1;
		int s;
         s=stu[i].score;
          stu[i].score=stu[i+1].score;
           stu[i+1].score=s;
		   m--;
		}
	}
}
void pm(ss stu[],int m)
{
	ss* stu[].place;
    for(i=0;i<m;i++)
	{
      stu[i]=i+1;
	  cout<<  学号：stu[i].number<<  姓名：stu[i].name<<  平时成绩：stu[i].dailyScore<<  实验成绩：stu[i].expScore<<  期末成绩stu[i].finalScore<<	 stu[i].score<<第stu[i].place名;
	}
}
void  cz(ss stu[])
{
    cin>>         输入成绩；
		cin>> p;
	        for(i=0;i<m;i++)
			{
			if(p=stu[i])
              cout<<  学号：stu[i].number<<  姓名：stu[i].name<<  平时成绩：stu[i].dailyScore<<  实验成绩：stu[i].expScore<<  期末成绩stu[i].finalScore<<	 stu[i].score<<第stu[i].place名;
			}
			else
				cout<< 此用户不存在；
}
void average(SS stu[], int N)
{
	float sum=0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + stu[i].score;
	}
	float aver;
	aver = sum / N;
	cout<<均值为： aver;
}
void variance(SS stu[], int N)
{
	float sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + stu[i].score;
	}
	float ave;
	ave = sum / N;
	float var;
	var = 0.1667*(pow(stu[0].score - ave, 2) + pow(stu[1].gscore - ave, 2) + pow(stu[2].score - ave, 2) + pow(stu[3].score - ave, 2) + pow(stu[4].score - ave, 2) + pow(stu[5].score - ave, 2));
	cout<<  方差为： var;
	if (var <= 1)
	cout<< 这些学生的成绩比较稳定！;
	else
	cout<< 这些学生的成绩不太稳定！;
}