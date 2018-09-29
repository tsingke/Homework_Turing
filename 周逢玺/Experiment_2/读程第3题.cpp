//¶Á³ÌµÚ3Ìâ£ºanswer2_4_3.cpp
#include<iostream>
using namespace std;
int i = 0;
int main()
{
	int i = 5;
	{
		i = 7;
		cout << "::i=" << ::i << endl;
		cout << "i=" << i << endl;
		::i = 1;
		cout << "::i=" << ::i << endl;
	}

	cout << "i=" << i << endl;
	cout << "::i=" << ::i << endl;
	i += ::i;
	::i = 100;
	cout << "i=" << i << endl;
	cout << "::i=" << ::i << endl;
	return 0;
}