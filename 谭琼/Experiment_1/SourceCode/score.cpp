#include "score.h"
#include <iostream>
using namespace std;

void readData(SS stu[], int N)
{
	cout << "请输入学号，姓名，平时成绩，实验成绩，期末成绩" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> stu[i].number >> stu[i].name >> stu[i].dailyScore >> stu[i].experScore >> stu[i].finalScore;
	}
}

/*SS* readDataFromFile(int *N) //从文件里读取学生信息
{

	printf("\n\n------第一步: 从文件读取学生的成绩信息--------\n\n");

	SS *stu;// 开辟新空间,存取文件中的每个学生信息

	FILE *fp = NULL;
	int count = 0;
	int index = 0;

	fp = fopen("E:\\codefile\\面向对象作业\\Homework_Turing\\李雷\\Experiment_1\\SourceCode", "r");

	//1.获取学生数目
	if (fp != NULL)
	{
		fscanf(fp, "%d", &count);
		*N = count;
	}
	else
	{
		printf("failed to open the info file\n");
		getchar();
	}

	printf("学生数目为:%d\n", count);
	getchar();

	//2.给所有学生分配存储空间
	stu = (SS*)malloc(count * sizeof(SS));


	//3.读取每条学生的信息
	while ((!feof(fp)) && (index < count))
	{

		//读入文件数据到内存
		fscanf(fp, "%s%s%f%f\n", (stu[index].number), (stu[index].name), &stu[index].dailyScore, &stu[index].finalScore);

		//输出原始学生信息
		printf("* 学号：%s	姓名:%s		平时成绩：%4.2f分		期末成绩:%4.2f分\n", (stu[index].number), (stu[index].name), stu[index].dailyScore, stu[index].finalScore);

		index++;


	}

	fclose(fp);

	return stu;
}*/

void calcuScore(SS stu[], int N)
{
	for (int i = 0; i < N; i++)
	{
		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.2*stu[i].experScore + 0.6*stu[i].finalScore;
	}
}

void sortScore(SS stu[], int N)		//根据成绩由高往低排序
{
	for (int i = 0; i < N; i++)
	{
		stu[i].rank = 1;			//排名标记，初始值为1
		for (int j = 0; j < N; j++)
		{
			if (j != i)				//避免自己跟自己比较
			{
				if (stu[i].generalScore < stu[j].generalScore)		//若序号为i的同学成绩比j的同学成绩低，则序号为i的同学名次增大1位（即下降1位）
				{
					stu[i].rank += 1;
				}
			}
		}
	}
}

void printOut(SS stu[], int N)
{
	cout << "姓名  学号  排名  平时成绩  期末成绩  实验成绩  总评成绩" << endl;
	for (int i = 1; i <= N; i++)	//i表示排名次序
	{
		for (int j = 0; j < N; j++)	//
		{
			if (stu[j].rank == i)
			{
				cout << stu[j].name << "  " << stu[j].number << "  " << stu[j].rank << "  " << stu[j].dailyScore
					<< "  " << stu[j].experScore << "  " << stu[j].finalScore << " " << stu[j].generalScore << endl;
				continue;
			}
		}
	}
}

void searchInformation(SS stu[], int N)
{
	char number[10];
	bool sign = false;
	cout << "请输入学号进行查询" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> number[i];
		if (number[i] == NULL)
			break;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (number[j] == stu[i].number[j])
			{
				if (number[j + 1] == NULL)
				{
					cout << stu[i].name << "  " << stu[i].number << "  " << stu[i].rank << "  " << stu[i].dailyScore
						<< "  " << stu[i].experScore << "  " << stu[i].finalScore << " " << stu[i].generalScore << endl;
					sign = true;
				}
			}
			
			
		}
		if(sign==false)
		{
			cout << "未查找到该学号" << endl; 
			break;
		}
	}

}



/*int calcuAver(SS a[], int N)
{
	int totalScore = 0, averageScore = 0;
	for (int i = 0; i < N; i++)
		totalScore += a[i];
	averageScore = totalScore / N;
	return averageScore;
}*/

double calcuAver(SS stu[], int N)
{
	double //dailyAverage = 0,
		//finalAverage = 0,
		//experAverage = 0,
		generalAverage = 0;

	for (int i = 0; i < N; i++)
	{
		//		dailyAverage += stu[i].dailyScore;

		//		finalAverage += stu[i].finalScore;

		//		experAverage += stu[i].experScore;

		generalAverage += stu[i].generalScore;

	}
	//	dailyAverage = dailyAverage / N;
	//	finalAverage = finalAverage / N;
	//	experAverage = experAverage / N;
	generalAverage = generalAverage / N;
	cout << "总平均分为：" << generalAverage << endl;
	return generalAverage;
}

double calcuVar(SS stu[], int N)
{
	double //dailyVar = 0,
		//finalVar = 0,
		//experVar = 0,
		M = calcuAver(stu, N),	//这里调用了calcuAver函数就会执行函数体内的所有语句，故会输出平均分的信息
		generalVar = 0;
	for (int i = 0; i < N; i++)
	{
		generalVar += (stu[i].generalScore - M) *(stu[i].generalScore - M);

	}
	generalVar = generalVar / N;
	cout << "方差为：" << generalVar << endl;
	return generalVar;

}