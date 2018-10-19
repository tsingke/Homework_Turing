#include<iostream>
using namespace std;
int i=0;
int main()
{
	int i = 5;
	{
		int i;
		i = 7;
		cout << "::i=" << ::i << endl;//0
		cout << "i=" << i << endl;//7
		::i = 1;
		cout << "::i="<<::i<<endl;//1
	}
	cout << "i=" << i<<endl;//5
	cout << "::i=" << ::i << endl;//1
	i += ::i;//6
	::i = 100;
	cout << "i=" << i << endl;//6
	cout << "::i=" << ::i << endl;//100
	system("pause");
	return 0;
}