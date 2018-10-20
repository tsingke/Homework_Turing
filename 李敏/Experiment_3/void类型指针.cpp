#include <iostream>

using namespace std;

int main()
{
	void *vp;
	char c = 'A';
	short int x = 97;
	vp = &c;             		//char类型的指针可以直接赋值给void类型的指针变�?
	cout << *(char *)vp << "  " << *(short int*)vp << endl;

	vp = &x;             		//short int类型的指针可以直接赋值给void类型的指针变�?
	//需要显式类型转换输出void类型指针所指向的内�?
	cout << *(short int *)vp << "  " << *(char*)vp << endl;
	system("pause");
	return  0;
}

