#include <iostream>
#include<fstream>
#include<string>
#include<math.h>
using namespace std;
#define SIZE 20
struct student {
	int number;
	string name;
	int usual_score;
	int experment_score;
	int final_score;
	int rank;
}student[SIZE],temp;
int main(void) {
	int n = 0;

	ifstream read("data.txt",ios::in);//把.txt的第一行6删掉了
	if (!read.is_open()) {
		cout << "文件打开失败！" << endl;
		//exit(1);
		return 0;
	}
	while(!read.eof() && n<SIZE){
		read >> student[n].number >> student[n].name >> student[n].usual_score >> student[n].experment_score >> student[n].final_score;
		student[n].rank = (2 * student[n].usual_score + 2 * student[n].experment_score + 6 * student[n].final_score) / 10;
		n++;
	}
	int record = n - 1;
	int maxIndex;
	for (int i = 0; i < record; i++) {
		maxIndex = i;
		for (int j = i + 1; j < record; j++) {
			if (student[j].rank > student[maxIndex].rank) {     // 寻找最大数
				maxIndex = j;                 // 将最大数的索引保存
			}
			temp = student[maxIndex];
			student[maxIndex] = student[i];
			student[i] = temp;
		}
	}
	cout << "成绩排名为：" << endl;
	for (int i = 0; i < record; ++i)
		cout<< "第" <<i+1<<": "<< "number:" << student[i].number << " name: " << student[i].name << " 平时成绩: " << student[i].usual_score << " 实验成绩：" << student[i].experment_score << " 期末成绩: " << student[i].final_score << " 总成绩: " << student[i].rank << endl;
	cout << "通过学号查询学生信息?（y/n）" << endl;
	char flag;
	int numbs;
	cin >> flag;
	if (flag == 'y') {
		cout << "请输入学号" << endl;
		cin >> numbs;
		//顺序查找
		int l = 0;
		for (int i = 0; i < record; i++) {
			if (student[i].number == numbs) {
				cout << "number:" << student[i].number << " name: " << student[i].name << " 平时成绩: " << student[i].usual_score << " 实验成绩：" << student[i].experment_score << " 期末成绩: " << student[i].final_score << " 总成绩: " << student[i].rank << endl;
				l++;
			}
		}
		if(l == 0)
		cout << "你是不是输错了？" << endl;
	}
	if(flag == 'n') {
	//	exit(1);
	return 0;
	}

	double average,fangcha,sum=0;
	for(int i = 0; i < record; i++)
	{
	    sum = sum + student[i].rank;
	}
	average = sum / record;
	int a=0;
	for(int i = 0; i < record; i++)
	{
	    a = a + pow(student[i].rank - average,2);
	}
	fangcha = a / record;
	cout<<"平均分为："<<average<<"方差为："<<fangcha<<endl;
	read.close();
}
