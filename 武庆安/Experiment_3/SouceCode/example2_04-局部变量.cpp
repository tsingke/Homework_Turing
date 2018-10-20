// example2_04：局部变量示例
#include <stdio.h>
#include <windows.h>
int n = 10;							//全局变量

void func(int n)
{
	n = 20;								//局部变量
	printf("func n: %d\n", n);
}
void func1()
{
	int n = 20;							//局部变量
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

int main()
{
	int n = 30;							//局部变量

	func(n);							//20	子函数有，传参，输出自己的wqa
	func1();							//20	子函数有，不传参，输出自己的
	func2(n);							//30	子函数无，传参，输出mian()里的
	func3();							//10	子函数无，不传参，输全局变量的

//代码块由{}包围
	{
		int n = 40;						//局部变量
		printf("block n: %d\n", n);		//40	代码块包围，输出代码块里的
	}
	printf("main n: %d\n", n);			//30	main---全局变量
	system("pause");
	return 0;
}