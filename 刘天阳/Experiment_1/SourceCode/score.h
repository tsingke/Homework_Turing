#pragma once

typedef struct
{
	char number[10];  //学号
	char name[10];    //姓名
	float dailyScore;   //平时成绩
	float finalScore;   //期末成绩
	float generalScore; //总评成绩

}SS;
class score
{
	
public:
	
	score();
	~score();
	SS* readDataFromFile(int *N);
	int Show_Menu(SS stu[]);
	SS* Get_Data();
    void SortScore(SS stu[], int N);//根据总评成绩排名
	void Search_stu(SS stu[],int N,char* search_num);//根据学号查找学生
	void Get_mean_variance(SS stu[], int N);//求均值和方差
};

