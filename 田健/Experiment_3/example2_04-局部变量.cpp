
#include <stdio.h>
#include<Windows.h>
int n = 10;  //全局变量

/*************子函数************/
void func1()
{
	int n = 20;  //局部变量
	printf("func1 n: %d\n", n);
}

void func2(int n)
{
	printf("func2 n: %d\n", n);
}
void func3()
{
	printf("func3 n: %d\n", n);
}

/*************main函数************/

int main()
{
	int n = 30;  //局部变量

	func1();//按定义函数中局部变量值
	func2(n);//安main函数中局部变量值
	func3();//按全局变量n值

	//代码块由{}包围
	{
		int n = 40;  //局部变量
		printf("block n: %d\n", n);
	}
	printf("main n: %d\n", n);
	system("pause");
	return 0;
}
//#include<Windows.h>
//system("pause");
