

#ifndef __SCORE_H__
#define __SCORE_H__

#include <iostream>

using namespace std;
typedef struct SS
{
	char num[500];
	char name[200];
	float UsScore;
	float ExScore;
	float FiScore;
	float ToScore;
	int ranking;
}SS;
SS * readscore(int * N);

void ranking(SS stu[] , int N);

void Totscore(SS stu[] , int N);

void searchscore(SS stu[] ,int N);

void printscore(SS stu[] ,int N);

void avescore(SS stu[] , int N);

#endif
