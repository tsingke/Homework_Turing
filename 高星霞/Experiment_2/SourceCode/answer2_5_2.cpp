#include<iostream>
using namespace std;
#include<windows.h>
int main()
{
	float pi = 3.141526;
	float S, C,r;
	cout << "请输入圆的半径:" << endl;
	cin >> r;
	S = pi*r*r;
	C = 2 * pi*r;
	cout << "S=" << S <<" "<<"C=" << C << endl;
	system("pause");
	return 0;

}