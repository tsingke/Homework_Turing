// example2_03：布尔型示例

#include <iostream>
#include <windows.h>
using namespace std;  //该指令涵盖了C++的名字空间中所有的标识符

int main()
{
	bool f = 1 < 2;

	cout << f << "  " << boolalpha << f << "  " << noboolalpha << f << endl;	//	1 true 1
																				//boolalpha，函数名称，功能是把bool值显示为true或false
																				//noboolalpha作用:输出时将bool值显示为1或0，而不是显示true或false
	system("pause");
	return 0;
}
