#include <stdio.h>
#include <windows.h>
int add(int a, int b);
int main()
{
	int x, y, sum;
	printf("Please enter x and y:\n");
	scanf_s("%d,%d", &x, &y);
	sum = add(x, y);
	printf("%d+%d=%d\n", x, y, sum);
	system("pause");
	return 0;
}
int add(int a, int b)
{
	return a + b;
}