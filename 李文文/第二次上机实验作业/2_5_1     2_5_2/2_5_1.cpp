#include<iostream>

using namespace std;

int add(int a, int b);

int main()
{
	int x, y, sum;
	cout << "Please input x and y:\n" ;
	cin >> x >> y;/*输入变量 x 和 y 的值*/
	sum = add(x, y);/*调用求和函数，结果存于 sum 中*/
	cout << x << '+' << y << '=' << sum;/*显示计算结果*/
	return 0;
}
int add(int a, int b)
{
	return a + b;
}

