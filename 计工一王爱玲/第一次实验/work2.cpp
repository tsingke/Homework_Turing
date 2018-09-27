#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<cmath>
#include<fstream>

using namespace std;

struct Student {
	string sid;
	string name;
	double score[3];
	double total;
	int rank1;
};
struct Student a[30];
int main()
{
	ifstream fin;
	fin.open("data.txt");//读取本项目内txt里的数据
	if (fin.fail())
	{
		cout << "Input file opening failed!";
		exit(1);
	}
	for (int i = 0; i < 30; i++)
	{
		fin >> a[i].sid;
		fin >> a[i].name;
		fin >> a[i].score[0];
		fin >> a[i].score[1];
		fin >> a[i].score[2];
		
		
	}
	//fin.close();

	for (int i = 0; i < 30; i++)
	{
		printf("%s  %s  %lf %lf %lf %lf %d\n", &a[i].sid[0], &a[i].name[0], 
			a[i].score[0], a[i].score[1], a[i].score[2], a[i].total, a[i].rank1);
			
	}
	/***读取成功*/


	/**计算总分**/
	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			a[i].total = 0.2*a[i].score[0] + 0.2*a[i].score[1] + 0.8*a[i].score[2];
		}
	}

	/***输出总分**/
	for (int i = 0; i < 30; i++)
	{
		printf("%lf\n", a[i].total);
	}

	/***冒泡排序(从大到小，，按成绩)*/
	struct Student b;
	for (int i = 0; i < 29; i++)
	{
		for (int j = i + 1; j < 30; j++)
		{
			if (a[j].total > a[i].total)
			{
				b = a[j];
				a[j] = a[i];
				a[i] = b;
			}
		}
	}

	for (int i = 0; i < 30; i++)
	{
		a[i].rank1 = i + 1;
	}

	printf("输出排序后的数组\n");
	for (int i = 0; i < 30; i++)
	{
		printf("%lf   %5d\n", a[i].total, a[i].rank1);
	}
	char *s1, *s2;
	//按学号
	for (int i = 0; i < 29; i++)
	{
		for (int j = i + 1; j < 30; j++)
		{
			s1 = &a[i].sid[0];
			s2 = &a[j].sid[0];

			if (strcmp(s1, s2) > 0)
			{
				b = a[j];
				a[j] = a[i];
				a[i] = b;
			}
		}
	}
	for (int i = 0; i < 30; i++)
	{
		printf("%s\n", &a[i].sid[0]);
	}
	/*计算均值和方差*/
	double ave = 0, s=0;
	for (int i = 0; i < 30; i++)
	{
		ave += a[i].total / 30;
	}
	for (int i = 0; i < 30; i++)
	{
		s+= (a[i].total - ave)*(a[i].total - ave);
	}
	s = s / 30; s = sqrt(s);//方差
	printf("均值%lf  方差%lf\n", ave, s);

	printf("输入学号查询学生成绩\n");
	string seq;
	cin >> seq;
	for (int i = 0; i < 30; i++)
	{
		if (seq == a[i].sid)printf("%lf\n", a[i].total);
	}

	/*将结果写入文件*/
	ofstream fout;
	fout.open("score.xls");

	for (int i = 0; i < 30; i++)
	{
		fout << a[i].sid << "\t";
		fout << a[i].name << "\t";
		fout << a[i].score[0] << "\t";
		fout << a[i].score[1] << "\t";
		fout << a[i].score[2] << "\t";
		fout << a[i].total << "\t";
		fout << a[i].rank1 << "\t";
		fout << "\n";
	}
	system("pause");
	return 0;
}