#include<iostream>
using namespace std;
int main()
{
	int x = 5;
	#define  T1  x+x
	#define  T2  T1-T1
	cout << "T1=" << T1 << "T2=" << T2 << endl;
	const int T3 = x + x;
	const int T4 = T3 - T3;
	cout << "T3=" << T3 << "T4=" << T4 << endl;
	system("pause");
	return 0;
}