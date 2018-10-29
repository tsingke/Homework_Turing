//
/*----------------------------------------------------*
 example2_03.cpp：布尔型示例
*-----------------------------------------------------*/

#include <iostream>

using namespace std;  //该指令涵盖了C++的名字空间中所有的标识符

int main()
{
	bool f = 1 < 2;       // 如果<前面的数字小于后面的，f值为1，反之为0

	cout << f << "  " << boolalpha << f << "  " << noboolalpha << f << endl;     //boolalpha操纵符使其输出为true或者false，noboolalpha操纵符使其输出恢复为1或者0

	system("pause");
	return 0;
}