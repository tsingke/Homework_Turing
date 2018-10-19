#include <iostream>

using namespace std;  //该指令涵盖了C++的名字空间中所有的标识�?

int main()
{
	bool f = 1 < 2;

	cout << f << "  " << boolalpha << f << "  " << noboolalpha << f << endl;

	system("pause");

	return 0;
}