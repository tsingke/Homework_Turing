#include<iostream>
using namespace std;

// 定义一个命名空间one，里面有1个常量M和一个变量inf
namespace one
{
	const int M = 200;
	int inf = 10;
}

// 定义一个命名空间two，里面有两个变量X个inf
namespace two
{
	int x;
	int inf = 100;
}

// 使用完整的命名空间one
using namespace one;
int main()
{
	// 仅使用命名空间二中的x
	using two::x;
	x = -100;
	cout << inf << endl;
	cout << M << endl;
	
	// 使用 命名空间名::局部内容名 操作未使用using声明的内容
	two::inf *= 2;
	cout << two::inf << endl;

	// 已经使用using声明的内容可以直接访问
	cout << x << endl;
	system("pause");
	return 0;
}