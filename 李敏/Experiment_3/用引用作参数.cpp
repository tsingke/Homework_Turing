#include <iostream> 
using namespace std;

void swap(int &x, int &y)                	//调用之初参数传递就使得引用参数成为//本次调用对应实际参数变量的别�?						
{
	int t = x;                         	//这里的引用x和y分别是两个实际参数变�?
	x = y;                            	//的别名，因此�?条语句实际上实现�?
	y = t;                            	//实际参数变量值的互换
}

int main()
{
	int a = 3, b = 5, c = 10, d = 20;

	cout << "a=" << a << "  b=" << b << endl; 	//输出交换前的a、b�?

	swap(a, b);                       	//调用函数，参数传递相当于执行�?
	//int &x=a; int &y=b;使引用参数获得了初�?
	cout << "a=" << a << "  b=" << b << endl; 	//输出交换后的a、b�?
	cout << "c=" << c << "  d=" << d << endl; 	//输出交换前的c、d�?

	swap(c, d);                      	//调用函数，参数传递相当于执行�?
	//int &x=c; int &y=d; 使引用参数获得了初�?
	cout << "c=" << c << "  d=" << d << endl; 	//输出交换后的c、d�?
	system("pause");
	return 0;
}
