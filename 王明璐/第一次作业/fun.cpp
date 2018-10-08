#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include "score.h"


SS * readscore(int * N)
{
	FILE * fp = NULL;
	int all = 0;
	fp = fopen("data.txt", "r");
	if (fp != NULL)
	{
		fscanf(fp, "%d", &all);
		*N = all;
		cout << "学生人数为：" << all<<endl ;
	}

	else
	{
		cout << "文件打开失败！" << endl;
	}

	SS * stu = new SS ;
	int i = 0;
	while ( !feof( fp ) && i < all)
	{
		fscanf(fp, "%s%s %f%f%f \n", (stu[i].num), (stu[i].name), &(stu[i].UsScore), &(stu[i].ExScore), &(stu[i].FiScore) );
		cout << stu[i].num << "     " << stu[i].name << "     " << stu[i].UsScore << "     " << stu[i].ExScore << "     " << stu[i].FiScore << endl;

		i++;
	}
	fclose (fp) ;
	return stu;
}
void Totscore( SS stu[], int N )
{
	int i;
	for (i = 0; i < N; i++)
	{
		stu[i].ToScore = 0.2*stu[i].UsScore + 0.2*stu[i].ExScore + 0.6*stu[i].FiScore;
	}
}

void ranking(SS stu[], int N)
{
	int i, j;
	for (i = 0; i < N-1; i++)
	{
		for (j = 0; j < N-1-i; j++)
		{
			if (stu[j].ToScore < stu[j + 1].ToScore)
			{
				swap(stu[j],stu[j+1]);
			}
		}
	}
	for (i = 0; i < N; i++)
		{
			stu[i].ranking = i + 1;
		}
}


void searchscore(SS stu[], int N)
{
	char s[50];
	cout << "请输入学号：";
	cin >> s;
	int i,j;
	for (i = 0; i < N; i++)
	{
		for ( j = 0 ; j < 10 ; j++ )
        {
            if ( stu[i].num[j] == s[j] )
            {
                if ( j == 9 )
                {
                    cout << stu[i].name << "     平时成绩：" << stu[i].UsScore <<"     实验成绩：" <<stu[i].ExScore <<"     期末成绩："<< stu[i].FiScore<<"     总成绩：" << stu[i].ToScore<<"     名次：" << stu[i].ranking<<endl;
                }
            }
            else { break ; }

        }

	}
}

void printscore(SS stu[], int N)
{
	cout << "成绩单：" << endl;
	int i = 0;
	cout << "姓名" << "     " << "学号" << "     " << "平时成绩" << "     " << "实验成绩" << "     " << "总成绩" << "     " << "名次" << endl;
	for (i = 0; i < N; i++)
	{
		cout << stu[i].name << "     " <<stu[i].num<<"     "<< stu[i].UsScore << "     " << stu[i].ExScore << "     " << stu[i].FiScore << "     " << stu[i].ToScore << "     " << stu[i].ranking<<endl;
	}
}

void avescore(SS stu[], int N)
{
	float ave;
	int i , add ;
	add = 0;
	for (i = 0; i < N; i++)
	{
		add += stu[i].ToScore;
	}
	ave = add / N;
	int var = 0;
	for (i = 0; i < N; i++)
	{
		var += ((stu[i].ToScore - ave) * (stu[i].ToScore - ave));
	}
	cout << "平均数：" << ave << endl;
	cout << "方  差：" << var << endl;
}
