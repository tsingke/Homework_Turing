#include"IO.h"
#include"Calculate.h"
#include"Sort.h"
#include"Search.h"
#include<stdio.h>
int main()
{
	FILE*fp=NULL;
	fp=openfile(fp);
	student*S=input(fp);
	fp=closefile(fp);
	addall(S);
	sort(S);
	search(S);
	average(S);
	return 0;
}