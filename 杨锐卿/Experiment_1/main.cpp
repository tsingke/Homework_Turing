#include<cstdio>
#include<iostream>
#include<fstream>
#include<cmath>
#include<algorithm>

using namespace std;

struct student
{
	string stu_ID, name;
	double d_score, t_score, e_score, f_score;
	int rank1;
}stu[100];

double cal_tscore(double d, double e, double f)
{
	return 0.2 * d + 0.2 * e + 0.6 * f;
}

bool cmp(student a, student b)
{
	return a.t_score > b.t_score;
}

int main()
{
	string s;					//需要查询的学生的学号
	bool flag;
	double ave, var, sum = 0, s2;   //平均分，方差，总成绩加和，方差*总人数
	int ans;
	ifstream fin;
	fin.open("date.txt");
	int t;
	fin >> t;//printf("t = %d\n", t);
	for (int i = 0; i < t; i++)
	{
		fin >> stu[i].stu_ID >> stu[i].name >> stu[i].d_score >> stu[i].e_score >> stu[i].f_score;
		stu[i].t_score = cal_tscore(stu[i].d_score, stu[i].e_score, stu[i].f_score);//cout << '\n' << stu[i].t_score<<endl;
		sum += stu[i].t_score;
	}
	fin.close();
	s2 = 0;
	ave = sum / (double)t;
	for (int i = 0; i < t; i++)
	{
		s2 += abs((stu[i].t_score - ave) * (stu[i].t_score - ave));
	}
	var = s2 / (double)t;
	printf("本课程的平均成绩为：%f 分  ", ave);
	if (ave < 60.0)
		printf("成绩不太理想\n");
	else if (ave < 85.0)
		printf("成绩优良\n");
	else
		printf("成绩优秀\n");
	printf("\t成绩方差为: %f\n", var);
	sort(stu, stu + t, cmp);
	printf("请输入学号以查询成绩, 按0退出\n\n");
	while(cin >> s)
	{//cout << stu[0].stu_ID<< s;
        flag = 0;
	    if(s == "0")
            break;
        else
        {
            for (int i = 0; i < t; i++)
            {
                if (stu[i].stu_ID == s)
                {
                    flag = 1;
                    ans = i;//printf("%d\n\n\n\n", i);
                    break;
                }
            }
            if (flag)
            {
                cout << "姓名:" << stu[ans].name << '\n';
                cout << "平时成绩:" << stu[ans].d_score << '\n';
                cout << "实验成绩:" << stu[ans].e_score << '\n';
                cout << "期末成绩:" << stu[ans].f_score << '\n';
                cout << "综合成绩:" << stu[ans].t_score << '\n';
                cout << "排名:" << ans+1 << '\n' << endl;
                flag = 0;
            }

            else
                printf("没有找到该学号成绩， 请检查重新输入\n");
            }
	}



	return 0;
}
