#include <iostream>
#include <windows.h>

int n = 10;  //全局变量

void func1()
{
	int n = 2;
	printf("func1 n:%d\n", n);
}

void func2(int n)
{
	printf("func2 n:%d\n", n);
}

void func3()
{
	printf("func3 n:%d\n", n);
}

int main()
{
	int n = 30;
	func1();
	func2(n);
	func3();
	{
		int n = 40;
		printf("block n:%d\n", n);
	}
	printf("main n:%d\n", n);


	system("pause");
	return 0;

}