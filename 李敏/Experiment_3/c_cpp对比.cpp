#include <iostream>
using namespace std;

int main()
{
	char c;                           //定义变量c、a、f的�?
	int a;
	float f;

	cin >> c >> a >> f;                //输入变量c、a、f的�?

	a = a + c;
	f = f + 2 * a;

	cout << "c=" << c << "  a=" << a << "  f=" << f << endl;  	//输出变量c、a、f的�?
	system("pause");
	return 0;
}
