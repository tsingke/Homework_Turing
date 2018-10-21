#include <iostream>
#include<fstream>
#include<string>
using namespace std;
#define N 20
struct student {
	int number;
	string name;
	int usualgrade;
	int expergrade;
	int finalgrade;
	int rank;
}student[N], temp;
int main(void) {
	int n = 0;
    ifstream read("data.txt", ios::in);
	if (!read.is_open()) {
		cout << "文件打开失败！" << endl;
		exit(1);
	}
	while (!read.eof() && n < N) 
	{
		read >> student[n].number >> student[n].name >> student[n].usualgrade >> student[n].expergrade >> student[n].finalgrade;
		student[n].rank = 0.2 * student[n].usualgrade + 0.2 * student[n].expergrade + 0.6 * student[n].finalgrade;
		n++;
	}
	int k= n - 1;
	int max;
	for (int i = 0; i < k; i++) {
		max= i;
		for (int j = i + 1; j < k; j++) {
			if (student[j].rank > student[max].rank) 
			{    
				max = j;               
			}
			temp = student[max];
			student[max] = student[i];
			student[i] = temp;
		}
	}
	cout << "成绩排名为：" << endl;
	for (int i = 0; i < k; ++i)
		cout << "第" << i + 1 << ": " << "number:" << student[i].number << " name: " << student[i].name << " 平时成绩: " << student[i].usualgrade << " 实验成绩：" << student[i].expergrade << " 期末成绩: " << student[i].finalgrade << " 总成绩: " << student[i].rank << endl;
	cout << "是否通过学号查询学生信息（y/n）" << endl;
	char flag;
	int numbs;
	cin >> flag;
	if (flag == 'y') {
		cout << "请输入学号" << endl;
		cin >> numbs;
		int l = 0;
		for (int i = 0; i < k; i++) {
			if (student[i].number == numbs) {
				cout << "number:" << student[i].number << " name: " << student[i].name << " 平时成绩: " << student[i].usualgrade << " 实验成绩：" << student[i].expergrade << " 期末成绩: " << student[i].finalgrade << " 总成绩: " << student[i].rank << endl;
				l++;
			}
		}
		if (l == 0)
			cout << "输入错误" << endl;
	}
	if (flag == 'n') 
	{
		exit(1);
	}
	read.close();
}