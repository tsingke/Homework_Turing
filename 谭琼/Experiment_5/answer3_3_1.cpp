#include <iostream>
using namespace std;
class B
{
	int x, y;
public:
	B()
	{
		x = y = 0;
		cout << "con1\t";
	}
	B(int i)
	{
		x = i; y = 0;
		cout << "con2\t";
	}
	B(int i, int j)
	{
		x = i; y = j;
		cout << "con3\t";
	}
	~B()
	{
		cout << "Des\t";
	}
};

int main()
{
	B *ptr;
	ptr = new B[3];		//声明并初始化 调用三次无参构造函数
	ptr[0] = B();		//调用构造函数1，结束后调用析构函数
	ptr[1] = B(1);		//调用构造函数2，结束后调用析构函数
	ptr[2] = B(2,3);	//调用构造函数3，结束后调用析构函数
	delete []ptr;		//释放动态分配内存，对对象数组里的每一个元素都调用析构函数
	system("pause");
	return 0;
}