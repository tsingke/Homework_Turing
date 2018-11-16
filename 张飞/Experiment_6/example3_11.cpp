#include"Date3.h"
#include<Windows.h>
Date f(Date Q)//普通函数，以类为对象作为值形式参数
{
	Date R(Q);//第1种调用拷贝构造函数情况，对应第6行输出
	return Q;
}
int main()
{
	Date day(2011, 5, 26);
	Date day3;
	Date day2(day1);
	Date day4 = day2;
	day3 = day2;
	day3 = f(day);
	day3.Display();
	system("pause");
	return 0;
}