#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	double r,C,S;
	cout << "Please input r:\n" << endl;
	cin >> r;
	S = 3.1415926*r*r;
	C = 2 * 3.1415926*r;
	cout << "���S=" << S << "�ܳ�C=" << C << endl;
	system("pause");
	return 0;
}