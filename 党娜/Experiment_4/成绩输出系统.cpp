#include <iostream>
using namespace std;
float checkAgeScore(int age, float score);
int main()
{
	char name[10];
	int age;
	float score;
	cout << "按顺序输入学生的姓名、年龄、五级制C++考试分数，我们将为您输出百分制成绩" << endl;
	cin >> name >> age >> score;
	checkAgeScore(age, score);
	try
	{
	cout << "学生的信息为："<<name<<"    "<<age<<"    "<<checkAgeScore(age,score) << endl;
	}
	catch (int )
	{
		cout << "你输入的年龄数据有误，请查看要求后重新输入！" << endl;
	}
	catch (float)
	{
		cout << "你输入的成绩数据有误，请查看要求后重新输入！" << endl;
	}
		cout << "数据计算完毕，欢迎使用！" << endl;
		system("pause");
		return 0;

	}


float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25) throw 1;
	if (score < 0 || score>5) throw 1.0;

	return score / 100;
}