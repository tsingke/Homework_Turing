#pragma once
#include<iostream>
#include <fstream>
#include <sstream>
using namespace std;
class work
{
private:
	struct Student {
		string sid;
		string name;
		int score[3];
		double total;
		int rank;
	};
	Student stu[60];
	int cnt = 0;
public:
	void readData()
	{
		fstream readfile;
		readfile.open("data.txt");
		cout << "录入以下同学" << endl;
		while (readfile.peek() != EOF)
		{
			readfile >> stu[cnt].sid;
			cout << stu[cnt].sid << endl;
			readfile >> stu[cnt].name;
			readfile >> stu[cnt].score[0];
			readfile >> stu[cnt].score[1];
			readfile >> stu[cnt].score[2];
			stu[cnt].total = 0.2*stu[cnt].score[0] +
				0.2*stu[cnt].score[1] + 0.6*stu[cnt].score[2];
			cnt++;
		}
		cout << "文件读取成功，总成绩计算成功" << endl;
	}
	void sortScore() {
		for (int i = 0; i < cnt; i++)
		{
			stu[i].rank = 1;
			for (int j = 0; j < cnt; j++)
			{
				if (stu[i].total < stu[j].total)
				{
					stu[i].rank++;
				}
			}
			cout << stu[i].rank << endl;
		}
		cout << "排名计算输出成功" << endl;
	}
	void check() {
		string str;
		cout << "请输入待查询学生学号：" << endl;
		cin >> str;
		cout << "学号       姓名  平时成绩 实验成绩 期末成绩 总成绩 排名" << endl;
		for (int i = 0; i < cnt; i++)
		{
			if (stu[i].sid == str)
			{
				cout << stu[i].sid << " " << stu[i].name << " ";
				for (int j = 0; j < 3; j++)
				{
					cout << stu[i].score[j] << "       ";
				}
				cout << stu[i].total << "   ";
				cout << stu[i].rank << endl;
			}
		}
	}
	void var() {
		double ar = 0;
		for (int i = 0; i < cnt; i++)
		{
			ar += stu[i].total;
		}
		ar /= cnt;
		cout << "输出成绩均值: " << ar << endl;
		double var = 0;
		for (int i = 0; i < cnt; i++)
		{
			var += (stu[i].total - ar)*(stu[i].total - ar);
		}
		var /= cnt;
		cout << "输出成绩方差: " << var << endl;
		system("pause");
	}
	
}; 
