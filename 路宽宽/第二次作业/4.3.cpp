#include<iostream>
using namespace std;

int i = 0;
int main()
{
	int i = 5;
	{
		int i;
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
	system("pause");
	return 0;
}