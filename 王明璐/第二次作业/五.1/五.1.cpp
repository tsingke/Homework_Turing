//将C语言风格的程序改成C++语言风格的源程序

//原C语言风格程序代码如下：

/*#include <stdio.h>
int add(int a, int b);

int main()
{
	int x, y, sum;
	printf("please input x and y:\n");
	scanf("%d%d", &x, &y);
	sum = add(x, y);
	printf("%d+%d=%d\n", x, y, sum);
	return 0;
}

int add(int a, int b)
{
	return a + b;
}*/

//改为C++风格语言风格的程序代码为：

#include <iostream>
#include <Windows.h>

using namespace std;

int add(int a, int b);

int main()
{
	int x, y, sum;
	cout << "Please input x and y:" << endl;
	cin >> x >> y;
	sum = add(x, y);
	cout << x << "+" << y << "=" << sum << endl;
	system("pause");
	return 0;
}

int add(int a, int b)
{
	return a + b;
}