#include <iostream>
#include <stdio.h>

using namespace std;

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

	func1();          //无形参，优先取func1中的20
	func2(n);        //n值传入30
	func3();         //无形参，func3中无n值，取全局变量10

	//代码块由{}包围
	{
		int n = 40;  //局部变量
		printf("block n: %d\n", n);//优先取40
	}
	printf("main n: %d\n", n);//取main中30

	system("pause");
	return 0;
}