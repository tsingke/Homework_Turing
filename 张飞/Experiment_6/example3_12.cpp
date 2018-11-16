#include<iostream>
#include<Windows.h>
using namespace std;
#include"Date4.h"
int main()
{
	Date today;//定义一个对象
	Date newday(2011, 10, 18);//再定义一个对象
	newday.Display();//调用函数输出
	system("pause");
	return 0;
}