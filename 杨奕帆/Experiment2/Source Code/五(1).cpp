#include<iostream>
using namespace std;
#include<Windows.h>

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int x, y, sum;
	cout << "请输入x和y的值：\n"<<endl;
	cin >> x >> y;
	sum = add(x, y);
	cout << x <<"+" <<y<<"="<<sum<< '\n'<<endl;
	system("pause");
	return 0;
}