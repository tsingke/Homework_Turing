#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct studentScore
{
		char number[10];
		char name[10];
		int dailyScore;
	    int experimentalScore;
		int finalScore;
		double generalScore;
		int place;
}SS;
    void calcuScore(SS stu[],int n)
	{
		for(int i=0;i<n;i++)
		stu[i].generalScore=stu[i].dailyScore*0.2+stu[i].experimentalScore*0.2+stu[i].finalScore*0.6;
	}
	void sortScore(SS stu[],int n)
	{
		int j;
		double a[6],temp;
		for(int i=0;i<n;i++)
		a[i]=stu[i].generalScore;
		for(i=0;i<n;i++)
		{
			int k=i;
			for(j=i+1;j<n;j++)
			{
				if(a[k]<a[j])
					k=j;
			}
			if(k!=i)
			{
			temp=a[k];
			a[k]=a[i];
			a[i]=temp;
			}
		}
		for(int m=0;m<n;m++)
		{
		  for(i=0;i<n;i++)
		{
			if(a[i]==stu[m].generalScore)
				stu[m].place=1+i;
		}
		}
	}
	double calcuaverage(SS stu[],int n)
	{
		double m=0;
		for(int i=0;i<n;i++)
			m+=stu[i].generalScore;
		m=m/n;
		return m;
	}
	double calcuvariance(SS stu[],int n)
	{
		double f=0;
		double m=calcuaverage(stu,n);
		for(int i=0;i<n;i++)
		{
			f+=pow((stu[i].generalScore-m),2);
		}
		f=f/6;
		return f;
	}
	void printOut(SS stu[],int n)
	{
		calcuScore(stu,n);
		sortScore(stu,n);
		for(int i=0;i<n;i++)
		printf("%s %s %d %d %d %.1lf %d\n",stu[i].number,stu[i].name,stu[i].dailyScore,stu[i].experimentalScore,stu[i].finalScore,stu[i].generalScore,stu[i].place);
	}
	void Search(SS stu[],int n)
	{
		int flag=0;
		char a[10];
		printf("请输入学生学号");
		scanf("%s",a);
       printf("该学生成绩为");
	   for(int i=0;i<n;i++)
	   {
	if(strcmp(a,stu[i].number)==0)
	{
		flag=1;
	break;
	}
	else
		flag=0;
	   }
	   if(flag==1)
		   printf("%d %d %d %.1lf %d\n",stu[i].dailyScore,stu[i].experimentalScore,stu[i].finalScore,stu[i].generalScore,stu[i].place);
	   else
		   printf("输入错误");
	}
    main()
	{
		SS stu[6];
		double m,f;
  FILE *fpRead=fopen("s.txt","r");
        for(int i=0;i<6;i++)
	{
		fscanf(fpRead,"%s %s %d %d %d",&stu[i].number,&stu[i].name,&stu[i].dailyScore,&stu[i].experimentalScore,&stu[i].finalScore);
		printf("%s %s %d %d %d\n",stu[i].number,stu[i].name,stu[i].dailyScore,stu[i].experimentalScore,stu[i].finalScore);
	}
	    printOut(stu,6);
		m=calcuaverage(stu,6);
		printf("该课程平均数为");
		printf("%lf\n",m);
		f=calcuvariance(stu,6);
		printf("该课程方差为");
		printf("%lf\n",f);
		Search(stu,6);
	}

