#define _CRT_SECURE_NO_WARNINGS
// 头文件
# include<stdio.h>

typedef struct
{
	char number[10];  // 学号
	char name[10];  // 姓名
	float dailyScore;  // 平时成绩
	float finalScore;  // 期末成绩
	float generalScore;  // 总成绩
}Stu;

/*-------------函数声明-----------*/

// 1、read the student's information
void readData(Stu stu[], int N);
Stu* readDataFromFile(int *N);

// 2、compute N student's generalScore
void calcuScore(Stu stu[], int N);

// 3、sort by generalScore;
void sortScore(Stu stu[], int N);

// 4、output the N student's general information
void printOut(Stu stu[], int N);

// 5、compute the mean of every subject
void computeMean(Stu stu[], int N);

// 6、compute the variance of every subject
void computeVariance(Stu stu[], int N);

