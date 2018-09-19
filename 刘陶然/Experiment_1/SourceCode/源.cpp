//****** 第一次作业  ******//
/*制作一个简单的成绩管理系统*/
#include<iostream>
#include<cstdio>
#include<cmath>
#include<fstream>
#include"score_administration.h"
#include<Windows.h>


using namespace std;

int main()
{
	string filename;
	filename = "data.txt";  //文件路径
	read_txt(filename);												//把文件读取到结构体里面

	
	calculate_all_students_final_score();    //计算所有学生的最终成绩...
	all_students_rank();  //对所有学生进行排名
	printf("输入0 ：推出成绩管理系统\n输入1 ：全部成绩预览\n输入2 ：查看整体均值/方差与成绩分析\n输入3 ：按学号查询学生信息\n");

	while (1) {
		printf("\n请您输入指令：\n\n");
		int n = 0;
		cin >> n;
		if (n == 0) break;
		switch (n)
		{

		case 1:{
			information_view();  //成绩预览
			break;
		}

		case 2:{
			calculate_mean_variance_and_analyze();   //计算均值和方差并做出分析...
			break;
		}

		case 3: {
			string n_2;
			while (1) {
				printf("输入 000 ：结束查询\n输入学号进行查找\n");
				cin >> n_2;
				if (n_2 == string("000")) break;
				else {
					search_student(n_2);
				}
			}
			break;
		}
		default: printf("您输入的指令无效，请重新输入 : \n");
		}
	}
	
	printf("谢谢您的使用\n\n");
	system("pause");
	return 0;
}

