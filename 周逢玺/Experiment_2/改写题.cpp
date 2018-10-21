//answer2_5_1.c程序改写题
#include<iostream>
#include<windows.h>
using namespace std;
int add(int a, int b);
int main()
{
	int x, y, sum;
	cout << "Please input x and y:" << endl;
	cin >> x >> y;                   //输入变量x和y的值
	sum = add(x, y);                 // 调用和函数，结果存于sum中
	cout << x << "+" << y << "=" << sum << endl;        //显示计算结果
	system("pause");
	return 0;
}
int add(int a, int b)                         //求和函数
{
	return a + b;
}