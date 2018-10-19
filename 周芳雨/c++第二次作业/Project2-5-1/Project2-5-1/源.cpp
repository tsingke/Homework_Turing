#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	int r, S, C;//半径 面积 周长
	cout << "输入圆的半径：" << endl;
	cin >> r;
	const int  PI=3;
	S = PI * r*r;
	C = 2 * PI*r;
	cout << "圆的面积为：" << S << '\n' << "圆的半径为：" << C << endl;
	system("pause");
	return 0;


}