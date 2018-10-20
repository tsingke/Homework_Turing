#include <iostream>
#include<fstream>
#include<string>
using namespace std;
#define SIZE 20
struct student {
	int number;
	string name;
	int usualgrade;
	int expergrade;
	int finalgrade;
	int rank;
}student[SIZE], temp;
int main(void) {
	int n = 0;
	ifstream read("data.txt", ios::in);
	if (!read.is_open()) {
		cout << "文件打开失败" << endl;
		exit(1);
	}
	while (!read.eof() && n < SIZE) {
		read >> student[n].number >> student[n].name >> student[n].usualgrade >> student[n].expergrade >> student[n].finalgrade;
		student[n].rank = (2 * student[n].usualgrade + 2 * student[n].expergrade + 6 * student[n].finalgrade) / 10;
		n++;
	}
	int record = n - 1;
	//展示函数（从上到下）
	/*for (int i = 0; i < record; ++i)
	cout << "number:" << student[i].number << " name: " << student[i].name << " 平时成绩: " << student[i].usualgrade << " 实验成绩：" << student[i].expergrade << " 期末成绩: " << student[i].finalgrade << endl;
	*/
	int maxIndex;
	for (int i = 0; i < record; i++) {
		maxIndex = i;
		for (int j = i + 1; j < record; j++) {
			if (student[j].rank > student[maxIndex].rank) {     // 寻找最大的数
				maxIndex = j;                 // 将最大数的索引保存
			}
			temp = student[maxIndex];
			student[maxIndex] = student[i];
			student[i] = temp;
		}
	}
	cout << "成绩排名为：" << endl;
	for (int i = 0; i < record; ++i)
		cout << "第" << i + 1 << ": " << "number:" << student[i].number << " name: " << student[i].name << " 平时成绩: " << student[i].usualgrade << " 实验成绩：" << student[i].expergrade << " 期末成绩: " << student[i].finalgrade << " 总成绩: " << student[i].rank << endl;
	cout << "是否通过学号查询学生信息（y/n）" << endl;
	char flag;
	int numbs;
	cin >> flag;
	if (flag == 'y') {
		cout << "请输入学号：" << endl;
		cin >> numbs;
		//顺序查找
		int l = 0;
		for (int i = 0; i < record; i++) {
			if (student[i].number == numbs) {
				cout << "number:" << student[i].number << " name: " << student[i].name << " 平时成绩: " << student[i].usualgrade << " 实验成绩：" << student[i].expergrade << " 期末成绩: " << student[i].finalgrade << " 总成绩: " << student[i].rank << endl;
				l++;
			}
		}
		if (l == 0)
			cout << "输错了" << endl;
	}
	if (flag == 'n') {
		exit(1);
	}
	read.close();
}