#include <stdio.h>
typedef struct
{		
	char name[10];
	char number[10];
	float dailyScore;
	float finalScore;
	float generalScore;
}SS;
void readData(SS std[], int N);
SS* readDataFromFile(int *N);
void calcuScore(SS std[], int N);
void sortScore(SS std[], int N);
void printOut(SS std[], int N);