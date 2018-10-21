#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	double p = 3.14;
	double x, C, S;
	cout << "ÇëÊäÈëÔ²µÄ°ë¾¶£º" << endl;
	cin >> x;
	C = 2 * x*p;
	S = p*x*x;
	cout << "C=" << C << endl << "S=" << S << endl;
	system("pause");
	return 0;
}
