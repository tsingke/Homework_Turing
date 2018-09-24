#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


#include<fstream>
#define MAX_PATH 10 
#include <string>


using namespace std;
typedef struct student
{
	long int sid;
	char name[MAX_PATH];
	int score[2];
	int total;
	int rank;
}st,*pst;


void getdata(pst *s)
{
	int i = 0;
	string str[100] = { "0" };
	ifstream infile;
	infile.open("c:\\data.txt");
	if (!(infile.is_open()))
	{
		cout << "打开文件错误！" << endl;
		return;
	}

	while (!infile.eof())
	{
		getline(infile, str[i], '\n');
		i++;

		for (int i = 0; i < 6; i++)
		{

			sscanf((char*)str[i].c_str(), "%ld %s %d %d %d",&s[i]->sid, s[i]->name, &s[i]->score[0], &s[i]->score[1], &s[i]->score[2],11,4,3,3,3);

		
		}


	}
	infile.close();
}
void sort(pst *s, int n)
{
	for (int i = 0; i < n; i++)
	{
		s[i]->total = (2 * s[i]->score[0] + 2 * s[i]->score[1] + 6 * s[i]->score[2]) / 10;
	}

	for (int i = 1; i < n; i++)         
	{
		int get = s[i]->total;                
		int j = i - 1;               
		while (j >= 0 && s[j]->total> get)    
		{
			s[j + 1] ->total= s[j]->total;          
			j--;
		}
		s[j + 1] ->total= get; 
	}
	for (int i = 0; i < 6; i++)
	{
		s[i]->rank = 6 - i;
	}

}





void putdata(pst *s)
{
	for (int i = 5;i>-1; --i)
	{
		cout << "第" << 6-i << "名: " << "学号:" << s[i]->sid << " 姓名: " << s[i]->name << " 平时成绩: " << s[i]->score[0]<< " 实验成绩：" << s[i]->score[1] << " 期末成绩: " << s[i]->score[2]<< " 总成绩: " << s[i]->total << endl;


	}
}
void pindata(pst *s)
{
	int p, q;
	p = (s[0]->total + s[1]->total + s[2]->total + s[3]->total + s[4]->total + s[5]->total) / 6;
	q = (s[0]->total - p)*(s[0]->total - p) + (s[1]->total - p)*(s[1]->total - p) + (s[2]->total - p)*(s[2]->total - p) + (s[3]->total - p)*(s[3]->total - p) + (s[4]->total - p)*(s[4]->total - p) + (s[5]->total - p)*(s[5]->total - p) / 6;
	cout << "平均值：" << p << "方差：" << q << endl;
}
void seek(pst* s)
{
	int i = 0,d;

	cout << "请输入您要查找的学生的学号:" << endl;
	cin >>d;
	for (i =0; i < 6; i++)
	{
		if (s[i]->sid== d && i <6)
		{
			cout << "平时成绩:" << s[i]->score[0] << "\n实验成绩：" << s[i]->score[1] << "\n期末成绩：" << s[i]->score[2]<<"\n总分：" << s[i]->total << "\n排名" << s[i]->rank<<"\n";

			break;
		}
	
	}

}

int main()
{
	pst s[6];
	
	for (int i = 0; i < 6; i++)
	{
		s[i] = new(st);
	}
	getdata(s);
	sort(s,6);
	putdata(s);
	pindata(s);
	while (true)
	{
		seek(s);
	}
	system("pause");
	return 0;
}
