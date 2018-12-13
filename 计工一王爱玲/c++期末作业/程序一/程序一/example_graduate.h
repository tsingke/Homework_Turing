#define _CRT_SECURE_NO_WARNINGS
#ifndef _GRADUATE
#define _GRADUATE

#include<iostream>
#include<cstring>
#include<string>

using namespace std;
const int N = 20;
class Student;
class Graduate
{
private:
	char *name;
	int number;
	int score;
	string speciality;
	string direct_teacher;

public:

	//默认构造函数
	Graduate()
	{
		name = NULL;
		number = 0;
		score = 0;
		speciality = "00";
		direct_teacher = "00";

	}


	//构造函数
	Graduate(char *na, int num, int sc, string spec, string teacher)
	{
		if (na)
		{
			name = new char[strlen(na) + 1];
			strcpy(name, na);

		}
		number = num;
		score = sc;
		speciality = spec;
		direct_teacher = teacher;

	}

	//拷贝构造函数
	Graduate(const Graduate &p)
	{

		if (p.name)
		{
			name = new char[strlen(p.name) + 1];
			strcpy(name, p.name);
		}
		number = p.number;
		score = p.score;
		speciality = p.speciality;
		direct_teacher = p.direct_teacher;
	}

	void show()
	{
		cout << "研究生的基本数据信息：\n";
		cout << "姓名：" << name << endl;
		cout << "学号：" << number << endl;
		cout << "成绩：" << score << endl;
		cout << "研究领域：" << speciality << endl;
		cout << "指导老师：" << direct_teacher << endl;

	}


	//=运算符重载
	Graduate & operator=(Graduate & p)
	{
		if (p.name)
		{
			name = new char[strlen(p.name) + 1];
			strcpy(name, p.name);
		}
		number = p.number;
		score = p.score;
		speciality = p.speciality;
		direct_teacher = p.direct_teacher;
		return *this;

	}
	//析构函数
	~Graduate()
	{
		delete []name;
	}
	//输出多个研究生对象的平均成绩




	//友元函数计算成绩等级（90-A，80-89-B  70-79-C  60-69-D，其余E）
	friend void rank_score(Graduate & p);
	friend Student;

};
//友元函数计算成绩等级（90-A，80-89-B  70-79-C  其余D）
void rank_score(Graduate & p)
{
	cout << "学生成绩等级：" << endl;
	if (p.score >= 90)cout << "A" << endl;
	else if (p.score >= 80 && p.score <= 89)cout << "B" << endl;
	else if (p.score >= 70 && p.score <= 79)cout << "C" << endl;
	else if (p.score >= 60 && p.score <= 69)cout << "D" << endl;
	else cout << "E" << endl;

}
class Student
{
private:
	string na;
	Graduate stu[20];
public:
	/*void show()
	{
		stu[0].score = 100;
		cout << stu[0].score << endl;
	}*/
	void input(int n)
	{
		cout << "下面开始录入n个学生的成绩：\n";
		cout << "请依次输入姓名，学号，成绩，专业，指导老师:\n";

		string na2; 
		int j = 0;
		
		for (int i = 0; i < n; i++)
		{
			
			cin >> na2 >> stu[i].number >> stu[i].score >> stu[i].speciality>> stu[i].direct_teacher;

			/*
			error-stu[i].name
			for (j = 0; j < na2.length(); j++)
			{
				stu[i].name[j] = na2[j];
			}
			stu[i].name[j] = '\0';
			
			*/

			stu[i].name = new char[na2.length() + 1];
			strcpy(stu[i].name, na2.c_str());//c_str()为把string na2 转化为const char *，
			//如果删掉则vs提示不存在从string到char *的转换；
				
		}
		
	}
	void output_average(int n)
	{
		double temp=0;
		cout << "学生的平均成绩是：" ;
		for (int i = 0; i < n; i++)
		{
			temp += stu[i].score;
		}
		cout << temp / n << endl;
	}

};

#endif 

