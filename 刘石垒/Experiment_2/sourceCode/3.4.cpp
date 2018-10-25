#include<iostream>
const int N = 20 + 10;
using namespace std;

void Tthree()
{
	int zhengshu = 0;
	int fushu = 0;
	//分配动态一维数组 
	int *arr = new int[20];
	cout << "请输入20个整数" << endl;
	for (int i = 0; i < 20; i++)
		cin >> arr[i];
	for (int i = 0; i < 20; i++)
	{
		if (arr[i] > 0)  zhengshu++;
		else if (arr[i] < 0)  fushu++;
	}
	cout << "正数的个数为：" << zhengshu <<endl<< "负数的个数为：" << fushu << endl;

	//释放arr数组 
	delete[] arr;
}

float checkAgeScore(int age, float score)
{
	if (age < 16 || age  > 25)     throw age;
	else if (score > 5 || score < 0)   throw score;
	else
		return score * 20;

}

void Ffour()
{
	char name[N];
	int age;
	float score;
	cout <<"请输入姓名、年龄、考试分数"<< endl;
	cin >> name>>age>>score;
	try
	{
		cout << "该同学的姓名、年龄、百分制成绩分别为：" << name<<"\t"<<age<<"\t"<<checkAgeScore(age, score)<<endl;
	}
	catch (float)
	{
		cout<<"输入信息有误！"<<endl;
	}
	
	cout << "Checkagescore finished!" << endl;
}

int main()
{
	int tihao;
	cout << "请输入题号：" << endl;
	cin >> tihao;
	switch (tihao)
	{
		case 3:Tthree(); break;
		case 4:Ffour(); break;
		default:break;
	}
	system("pause");
	return 0;
}