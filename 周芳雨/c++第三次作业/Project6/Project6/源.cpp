#include<iostream>
#include<Windows.h>
using namespace std;

namespace one
{
	const int M = 200;
	int inf = 10;
}
namespace two
{
	int x;
	int inf = -100;
}
using namespace one;
int main()
{
	using two::x;
	x = -100;
	cout << inf << endl;
	two::inf *= 2;
	cout << two::inf << endl;
	cout << x << endl;
	system("pause");
	return 0;
}