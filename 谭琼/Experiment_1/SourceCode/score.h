
#include <iostream>
using namespace std;


typedef struct
{
	char number[10];  //学号
	char name[10];    //姓名
	int rank;		  //排名
	double dailyScore;   //平时成绩
	double finalScore;   //期末成绩
	double experScore;	 //实验成绩
	double generalScore; //总评成绩

}SS;


/*---------------函数声明-------------------*/

//1.读取学生基本数据
void readData(SS stu[], int N);
//SS* readDataFromFile(int *N);//不会

//2.计算N个学生的总评成绩
void calcuScore(SS stu[], int N);


//3.根据总评成绩排名
void sortScore(SS stu[], int N);


//4.按照一定的格式输出N个学生的完整信息 选择根据排名由高到低
void printOut(SS stu[], int N);

//5.输入学号查询某个同学的成绩信息
void searchInformation(SS stu[], int N);

//6.统计成绩的均值
double calcuAver(SS stu[] , int N);

//7.统计成绩方差
double calcuVar(SS stu[], int N);