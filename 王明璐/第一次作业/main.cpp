// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//



#include <iostream>
#include <stdlib.h>
#include "score.h"

int main()
{
	SS * a;
	int N = 0;
	int *z ;
	z = &N ;
	a = readscore(z);
	ranking(a, N);

	Totscore( a,  N);

	searchscore( a,  N);

	printscore( a,  N);

	avescore( a, N);
	return 0;

}
