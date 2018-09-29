#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
#include<fstream>
#include"标头.h"
#include<Windows.h>
using namespace std;

int main()
{
	readdata_txt();
	cout << "\nreaddata_txt()-over\n" << endl;
	calc_all_stu_final_score();					//计算所有学生的最终成绩
	sort_all_stu_rank();						//对所有学生进行排名
	cout<<"输入0 ：退出学生成绩管理系统\n输入1 ：全部学生成绩预览\n输入2 ：按学号查询学生信息\n输入3 ：查看学生成绩均值、方差并进行成绩分析\n"<<endl;
	while (1) 
	{
		cout<<"\n请输入指令："<<endl;
		int n = 0;
		cin >> n;
		if (n == 0) break;
		switch (n)
		{
			case 1:
			{
				stu_info_view();					//学生信息预览
				break;
			}
			case 2: 
			{
				search_stu();						//F3按学号查找学生成绩信息
				break;
			}
			case 3: 
			{
				calc_mean_variance_and_analyze();   //F4统计出该课程成绩的均值和方差，并对成绩分布简要分析
				break;
			}
			default: cout << "输入指令错误，请重新输入 :" << endl;
		}
	}
	system("pause");
	return 0;
}