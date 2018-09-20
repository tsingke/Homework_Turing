#pragma once
#include"Calculate.h"
void sort(student*p)
{
	int i=0,j=0,n=0,m=0;
	float k=0;
	for(int u=0;u<a;u++)
		p[u].sort=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(p[j].sort!=0)continue;
			k=p[j].addall;
			m=j;
			for(n=0;n<a;n++)
				if(p[n].addall>k&&p[n].sort==0)
				{
					m=n;
					k=p[n].addall;
				}
		}
		p[m].sort=i+1;
	}
}