//求圆周长及面积
#include<Windows.h>
#include<iostream>
using namespace std;
const double PI = 3.1415926;//一定不要忘记加分号！！！
int main()
{
	double r, s, c;
	cout << "请输入半径"<<endl;
	cin >> r;
	s = PI * r*r;
	c = 2 * PI*r;
	cout << "周长是" << c << " 面积是" << s << endl;
	system("pause");
	return 0;
}