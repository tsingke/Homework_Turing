#include<stdio.h>
add(int a, int b);
int main()
{
	int x, y, sum;
	printf("Please input x and y:\n");
	scanf("%d%d", &x, &y);               /*输入变量x和y的值*/
	sum = add(x, y);                     /*调用求和函数，结果存于sum中*/
	printf("&d+%d=%d\n", x, y, sum);     /*显示计算结果*/
	return 0;
}
add(int a, int b)
{
	return a + b;                          /*求和函数*/
}