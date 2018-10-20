//第五题 编程题answer2_5_2.c用C++语言编写一个输入圆半径，输出其面积与周长的程序
#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	int r, S, C;//半径 面积 周长
	cout << "请输入圆的半径：" << endl;
	cin >> r;
	const int PI=3;
	S = PI * r*r;
	C = 2 * PI*r;
	cout << "圆的面积为：" << S << '\n' << "圆的半径为：" << C << endl;
	system("pause");
	return 0;


}
