#pragma once
#include"stu.h"
void addall(student*p)
{
	for(int i=0;i<a;i++)
	{
		p[i].addall=p[i].daily*0.2+p[i].expscore*0.2+p[i].finalscore*0.6;
	}
}
void average(student*p)
{
	double m=0,n=0;
	for(int i=0;i<a;i++)
		m=m+p[i].addall;
	m=m/a;
	for(int i=0;i<a;i++)
		n=n+(p[i].addall-m)*(p[i].addall-m);
	n=n/a;
	printf("平均分为%lf，方差为%lf\n平均分",m,n);
	if(m>=90)printf("优秀\n");
	else if(m>=80)printf("良好\n");
	else if(m>=70)printf("较好\n");
	else if(m>=60)printf("不错\n");
	else printf("较差\n");
	if(n>=5)printf("分数分布不均\n");
	else printf("分数分布较为集中\n");
}
	