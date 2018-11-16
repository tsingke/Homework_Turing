#include"Date1.h"
#include<Windows.h>

int main()
{
	Date today, *t;
	today.SetDate(2006, 10, 17);//通过对象以圆点形式访问成员函数
	cout << "one day is:";
		today.Display();//输出日期的信息
		t = &today;
		(*t).SetDate(2007, 12, 18);//*t是通过指针间接引用的对象，再通过圆点访问成员函数
		cout << "the other day is:";
		(*t).Display();
		system("pause");
		return 0;
}