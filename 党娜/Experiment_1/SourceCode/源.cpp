#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
struct SS//用结构体
{
	string sid;//学号
	string name;
	int total;//总分
	int score[5];//各科成绩
	int rank;//排名
}student[30], temp;
int main()
{
	int i, j;
	ifstream import1("allscore.txt")//这个操作可以把文件输出给结构体
		for (i = 0;i < 30;i++)
		{
			import1 >>
				student[i].sid >>
				student[i].name >>
				student[i].score[0] >>
				student[i].score[1] >>
				student[i].score[2] >>
				student[i].score[3] >>
				student[i].score[4];
		}
	import1.close();//打开文件后需要关闭文件
	cout << "现在的数据是：" << endl;
	for (i = 0;i < 30;i++)
	{
		cout << student[i].sid << "" <<
			student[i].name << "" <<
			student[i].score[0] << "" <<
			student[i].score[1] << "" <<
			student[i].score[2] << "" <<
			student[i].score[3] << "" <<
			student[i].score[4] << endl;
	}
	for(i=0;i<30;i++)
	{
		student[i].total = student[i].score[0] + student[i].score[1] + student[i].score[2] + student[i].score[3] + student[i].score[4];
		student[i].rank = 30;
	}
	for (i = 0; i < 30; i++)
		for (j = 0; j < 30; j++)
		{
			if (student[i].total > student[j].total)
				student[i].rank--;
		}//算排名两种方法，此为自己的方法
	for (i = 0;i < 30;i++)
		for (j = 0; j < 30; j++)
		{
			if (student[i].sid < student[j].sid)
			{
				temp = student[j];
				student[j] = student[i];
				student[i] = temp;
			}
		}
	cout << "Now,the data is:" << endl;
	for (i = 0; i < 30; i++)
	{
		cout << student[i].sid << " " << student[i].name << " " << student[i].score[0] << " " << student[i].score[1] << " " << student[i].score[2] << " " << student[i].score[3] << " " << student[i].score[4] << " ";
		cout << student[i].total << " " << student[i].rank << endl;
	}
	ofstream export1("final.csv");//数据输出成CSV格式，即；
	for (i = 0; i < 30; i++)
	{
		export1 << student[i].sid << " " << student[i].name << " " << student[i].score[0] << " " << student[i].score[1] << " " << student[i].score[2] << " " << student[i].score[3] << " " << student[i].score[4] << " ";
		export1 << student[i].total << " " << student[i].rank << endl;
	}
	export1.close();
	getchar();
	return 0;
}
 }




}