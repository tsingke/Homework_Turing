#include <iostream>
using namespace std;
void fun(int x, int &y)
{
	x += y;
	y += x;
}//引用会直接修改变量 而普通变量x在函数作用完后直接被释放掉，不会修改原来的变量x
int main()
{
	int x = 5, y = 10;
	fun(x, y);//语句执行完后x的值不会变，而第二个形参是引用参数，会直接改变y的值
	fun(y, x); 
	cout << "x=" << x << ",y=" << y << endl;
	system("pause");
	return 0;
}