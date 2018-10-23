#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int arr[3] = { 0 }, i = 123;    // 定义1个局部变量,作用域不含第2个i所在域
	cout << "i=" << i << endl;    // 输出第i个的值为 123
	{
		for (int i = 0; i < 2; i++)    // 定义第二个局部变量i,作用域仅限于该语句块
		{
			arr[i] = (i + 5) * 10 + 3;
			cout << "i=" << i << endl;    // 输出第二个局部变量i的值,第一个i不起作用
		}
		
		arr[2]++;
		cout << "i=" << i << endl;
	}                              // 第二个i的作用域到此结束
	cout << "i=" << i << endl;     // 输出的为第一个i的值
	int sum = 0;    // 定义局部变量sum,随用随定义
	for (i = 0; i < 3; i++)    // 第一个i在起作用
	{
		sum += arr[i];
	}
	cout << "i=" << i << endl;
	for (i = 0; i < 3; i++)
	{
		cout << setw(4) << arr[i] << endl;    // setw控制格式,后面按每个元素占4列输出
	}
	cout << "i=" << i << ",sum = " << sum << endl;
	system("pause");
	return 0;
}