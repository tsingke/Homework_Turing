#include <iostream>
using namespace std;

int divide(int x, int y)
{
	if (y == 0) throw y;                 //如果分母为零，抛出异�?
	return x / y;
}


int main()
{
	int a = 10, b = 5, c = 0;

	try                                 //检查是否出现异�?
	{
		cout << "a/b=" << divide(a, b) << endl;
		cout << "b/a=" << divide(b, a) << endl;
		cout << "a/c=" << divide(a, c) << endl;
		cout << "c/b=" << divide(c, b) << endl;
	}
	catch (int)                        //捕获异常并作出处理，即输出一条提示信�?
	{
		cout << "except of divide zero" << endl;
	}

	cout << "calculate finished" << endl;  	//catch块的后续语句
	system("pause");
	return 0;
}
