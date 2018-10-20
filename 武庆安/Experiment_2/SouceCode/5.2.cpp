#include<iostream>
#include<Windows.h>
#define pi 3.1415926
using namespace std;

int main()
{
	double R, C, S;
	cout << "Please input R" << endl;
	cin >> R;
	C = 2 *pi *R;
	S =pi * R*R;
	cout << "C=" << C<<endl<< "S=" << S << endl;
	system("pause");
	return 0;
}
