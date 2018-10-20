//读程序第三题：answer2_4_3.cpp
#include <iostream>
#include <Windows.h>
using namespace std;
int i = 0;
int main()
{
	int i=5;
	{
	int i;
	i = 7;
	cout << "::i=" << ::i << endl;
	cout << "i=" << ::i << endl;
	::i = 1;
	cout << "::i=" << ::i << endl;
	}
	cout << "i=" << i << endl;
	cout << "::i" << ::i << endl;
	i += ::i;
	::i = 100;
	cout << "i=" << i << endl;
	cout << "::i=" << ::i << endl;
	system("pause");
	return 0;

}

