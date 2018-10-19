#include <iostream>
#include <windows.h>

using namespace std;


float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score>5)
		throw score;
	return score / 100;

}
int main()
{
	char c;
	int a;
	float f;
	cin >> c >> a >> f;
	try
	{
		cout << "姓名：" << c << "年龄：" << a << "成绩：" << f << checkAgeScore(a, f) << endl;
	}
    catch (char)
	{
		cout << "名字输入不符合规范请重新输入" << endl;
	}
    catch (int)
	{
		cout << "年龄输入不符合规范请重新输入" << endl;
	}

	catch (float)
	{
		cout << "成绩输入不符合规范请重新输入" << endl;
	}

	system("pause");
	return 0;
}