#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
const int N = 200;
int number = 1;

struct Student
{
	int  num; 
	char name[10]; //每个汉字占两个字节，中国人的名字，5个汉字够用
	float sub;
	float lab;
	float qimo;
	float grade;
	int paiming;
};

int main()
{
	int i, stuNum = 0;

	//定义结构体数组
	Student stu[N];

	//下面从文件中读取数据到结构体数组，在读入的过程中计算总分
	ifstream infile("date.txt", ios::in); 	//以输入的方式打开文件
	if (!infile)   				//测试是否成功打开
	{
		cout << "open error!" << endl;
		system("pause");
		exit(1);
	}
	i = 0;
	while (!infile.eof())
	{
		infile >> stu[i].num >> stu[i].name >> stu[i].sub >> stu[i].lab >> stu[i].qimo;
		stu[i].grade = 0.2*stu[i].sub + 0.2*stu[i].lab + 0.6*stu[i].qimo;
		++stuNum;
		++i;
		number++;
	}
	infile.close();

	for (int i = 0; i <number ; i++)
	{
		stu[i].paiming = i+1;
	}

	//排序
	for (int i = 0; i < number - 2; i++)
	{
		for (int j = i+1; j < number-1; j++)
		{
			if (stu[i].grade < stu[j].grade)
			{
				int temp = stu[j].paiming;
				stu[j].paiming = stu[i].paiming;
				stu[i].paiming = temp;

			}
		}
	}

	for (int i = 1; i <= stuNum; i++)
	{
		for (int j = 0; j < number-1; j++)
		{
			if (stu[j].paiming == i)
			{
				cout << stu[j].num << "\t" << stu[j].name << "\t" << stu[j].sub << "\t" << stu[j].lab << "\t" << stu[j].qimo << "\t" << stu[j].grade << endl;
			}
		}
	}
	
	//查询某人
	int bool1;
	cout << "是否要查某人的成绩？（1为是，0为否）" << endl;
	while (cin>>bool1  &&  bool1==1)
	{
		int xuehao;
		cout << "请输入学号：" << endl;
		cin >> xuehao;

		for (int i = 0; i < stuNum; i++)
		{
			if (stu[i].num == xuehao)
			{
				cout << stu[i].num << "\t" << stu[i].name << "\t" << stu[i].sub << "\t" << stu[i].lab << "\t" << stu[i].qimo << "\t" << stu[i].grade << endl;
			}
		}
		cout << "是否要查某人的成绩？（1为是，0为否）" << endl;
	}

	//均值和方差
	float junzhi = 0; float fangcha = 0; float he = 0;
	for (int i = 0; i < number-1; i++)
	{
		he = he + stu[i].grade;
	}
	junzhi = he / (number - 1);
	cout << "这些学生成绩的均值为：" <<junzhi << endl;
	he = 0;
	for (int i = 0; i < number-1; i++)
	{
		he = he + (stu[i].grade - junzhi)*(stu[i].grade - junzhi);
	}
	fangcha = he / (number-1);
	cout << "这些学生成绩的方差为：" << fangcha << endl;
	
	//比较
	if (fangcha > 50)
		cout << "这些同学的成绩差距比较大！" << endl;
	if (fangcha < 50)
		cout << "这些同学的成绩比较接近！" << endl;

	system("pause");	
	return 0;
}