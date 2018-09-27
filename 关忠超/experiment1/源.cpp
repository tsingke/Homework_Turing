#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include"student.h"
using namespace std;

int main()
{
	// initial variable
	int N = 0;  // the number of student
	Stu *pstu = NULL;

	// read data from file
	pstu = readDataFromFile(&N);

	// compute the general
	calcuScore(pstu, N);

	// sort by general score
	sortScore(pstu, N);
	
	// accroding to sort output student's information
	printOut(pstu, N);

	// compute the mean of every subject
	computeMean(pstu, N);

	// compute the variance of every subject
	computeVariance(pstu, N);

	// free up memory space
	free(pstu);

	printf("\n");
	system("pause");
	return 0;

}