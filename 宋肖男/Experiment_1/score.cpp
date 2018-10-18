#include<iostream>
#include<math.h>
#include <string>
#include<stdlib.h>
#include<stdio.h>
#include <cstdlib>
#include <fstream>
#include"score.h"
using namespace std;


//读取学生信息
SS* readDataFromFile(int N)//文件读取方法
{
	cout << endl << "-----第一步: 从文件(项目目录下）读取学生的成绩信息--------" << endl;
	ifstream fin;
	fin.open("data.txt");//读取本项目内txt里的数据
	if (fin.fail())
	{
		cout << "Input file opening failed!";
		exit(1);
	}
	cout << "学生数目为:" << N << endl;
	SS stu[100];
	for (int i = 0; i < N; i++)
	{
		fin >> stu[i].number;
		fin >> stu[i].name;
		fin >> stu[i].dailyScore;
		fin >> stu[i].text;
		fin >> stu[i].finalScore;
		cout << "学号;" << stu[i].number << " " << "姓名:" << stu[i].name << " " << "平时成绩：" << stu[i].dailyScore << " " << "实验成绩:" << stu[i].text << " " << "期末成绩:" << stu[i].finalScore << endl;
	}
	fin.close();
	return stu;
}

//计算学生的总评成绩
void calcuScore(SS stu[], int N)
{
	cout << endl << "-----第二步: 计算学生的总成绩--------" << endl;
	for (int i = 0; i < N; i++)
	{
		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.2*stu[i].text + 0.6*stu[i].finalScore;
		cout << "学号;" << stu[i].number << " " << "姓名:" << stu[i].name << " " << "总成绩:" << stu[i].generalScore << endl;
	}
}

//排名(冒泡算法）
void sortScore(SS stu[], int N)
{
	int i, j;
	SS swap;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < (N - i); j++)
		{
			if (stu[j].generalScore < stu[j + 1].generalScore)
			{
				swap = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = swap;
			}
		}
		stu[i].rank = i + 1;
	}
}

//输出学生的完整信息
void printOut(SS stu[], int N)
{
	cout << endl << "------第三步: 根据总成绩由大到小输出学生完整信息!------" << endl;

	for (int i = 0; i < N; i++)
	{

		cout << "学号;" << stu[i].number << " " << "姓名:" << stu[i].name << " " << "平时成绩：" << stu[i].dailyScore << " " << "实验成绩:" << stu[i].text << " " << "期末成绩:" << stu[i].finalScore << " " << "总成绩:" << stu[i].generalScore << " " << "排名" << stu[i].rank << endl;
	}

}

//写入Excel文档
void putintoExcel(SS stu[], int N)
{
	cout << endl << "-------第四步：将学生完整信息写入项目目录下的Ecxel文档------" << endl;
	ofstream fout;
	fout.open("..\\score.xls");
	fout << "学号\t姓名\t平时分数\t实验分数\t期末分数\t总分\t名次\t\n";
	for (int i = 0; i < N; i++)
	{
		fout << stu[i].number << "\t";
		fout << stu[i].name << "\t";
		fout << stu[i].dailyScore << "\t";
		fout << stu[i].finalScore << "\t";
		fout << stu[i].text << "\t";
		fout << stu[i].generalScore << "\t";
		fout << stu[i].rank << "\t";
		fout << "\n";
	}
	fout.close();

}

//输入学号即可查询功能
void inSpect(SS stu[], int N)
{
	long a;
	int b = 0;
	char f = 0;
	cout << endl << "————————————第五步：查询功能——————————" << endl;
	cout << "请输入要查询学号：" << endl;


	cin >> a;

	for (int i = 0; i < N; i++)
	{
		if (a == stu[i].number)
		{
			cout << "符合学号;" << stu[i].number << "的是 " << "姓名:" << stu[i].name << " " << "平时成绩：" << stu[i].dailyScore << " " << "实验成绩:" << stu[i].text << " " << "期末成绩:" << stu[i].finalScore << " " << "总成绩:" << stu[i].generalScore << " " << "排名" << stu[i].rank << endl;
			b = 1;

		}

	}

	if (b == 0)cout << "查询失败" << endl;
}
//求方差及平均值
void calculate(SS stu[], int N)
{
	int i = 0;
	cout << endl << "————————————第六步：计算均值——————————" << endl;
	float SUM = 0;
	for (; i < N; i++)
	{
		SUM = SUM + stu[i].generalScore;
	}
	SUM = (float)(SUM / i);
	cout << "平均总成绩为：";
	cout << SUM << endl;
	cout << endl << "————————————第七步：计算方差——————————" << endl;
	float b = 0, c;
	i = 0;
	for (; i < N; i++)
	{
		b = (float)(b + (stu[i].generalScore - SUM)*(stu[i].generalScore - SUM));
	}
	c = (float)(b / i);
	cout << "方差为：" << c << endl;


}