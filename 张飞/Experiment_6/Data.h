#include<iostream>
#include<Windows.h>
using namespace std;
class Date
{
private:
	int year;//private可以省略，为默认属性
	int month;//数据成员
	int day;
public:
	void SetDate(int, int, int);//对显示数据成员初始化的共有成员函数
	void Display();//执行显示功能的共有成员函数
	int GetYear();//公有成员函数，提取year变量值
	int GetMonth();//公有成员函数，提取Month变量值
	int GetDay();//公有成员函数，提取day变量值
};//此分号不能少，表示定义结束