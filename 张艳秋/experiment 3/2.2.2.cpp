#include<iostream>
using namespace std;
int main()
{
	int x = 5;
	const int T1 = x + x;
	const int T2 = T1 - T1;
	cout << "T1=" << T1 << "   T2=" << T2 << endl;

	system("pause");
	return 0;
	
}