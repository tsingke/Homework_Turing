work.h
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

class  student
{
public:
	string id;
	string name;
	int daily;
	int experiment;
	int fina;
	double  total;
	int rank;
};
源.cpp
#include <cstdio>
#include "work.h"
#include <iostream>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <sstream>
using namespace std;

bool cmp(student x, student y)
{
	return x.total > y.total;
}
int main()
{
	student per[50];
	fstream read;
	read.open("read.txt");
	int cnt = 0;
	int i, j;
	double aver = 0, v = 0;
	while (read.peek() != EOF) {

		string id;
		string name;
		int daily;
		int experiment;
		int fina;
		read >> id;
		read >> name;
		read >> daily;
		read >> experiment;
		read >> fina;
		cnt++;
		cout << cnt << endl;
		per[cnt].id = id;
		per[cnt].name = name;
		per[cnt].daily = daily;
		per[cnt].experiment = experiment;
		per[cnt].fina = fina;
		per[cnt].total = 0.2*daily + 0.2*experiment + 0.6*fina;
		aver += per[cnt].total;
	}
	aver /= cnt;
	for (int i = 1; i <= cnt; i++)
	{
		cout << per[i].id << ' '
			<< per[i].name << ' '
			<< per[i].daily << ' '
			<< per[i].experiment << ' '
			<< per[i].fina << endl;
	}
	read.close();
	sort(per + 1, per + cnt, cmp);
	cout << "班级排名:" << endl;
	for (i = 1; i <= cnt; i++)
	{
		cout << i << ' ' << per[i].id << ' ' << per[i].name << ' ’ <<per[i].total<<endl;
			v += (per[i].total - aver)*(per[i].total - aver);
		per[i].rank = i + 1;
	}
	v /= cnt;
	cout << "输入想查询学生的学号" << endl;
	string str;
	cin >> str;
	cout << '4' << endl;
	for (i = 1; i <= cnt; i++)
	{
		if (per[i].id == str)
		{
			cout << per[i].id << ' ' << per[i].name << ' ' << per[i].daily << ' '
				<< per[i].experiment << ' ' << per[i].fina << ' ' << per[i].total
				<< per[i].rank
				<< endl;
			break;
		}
	}
	cout << "平均值" << ' ' << aver << endl << "方差" << ' '
		<< v << endl;
	system("pause");
	return 0;
}