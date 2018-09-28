#include <iostream>
#define cir 3.14
using namespace std;
double calcuacr(int x);
double calcuper(int x);
int main()
{
	int x;
	double acr, per;
	cout << "ÇëÊäÈëÔ²°ë¾¶£º" << endl;
	cin >> x;
	acr = calcuacr(x);
	per = calcuper(x);
	cout << acr << " " << per << endl;
	system("pause");
	return 0;
}
double calcuacr(int x)
{
	return cir*x*x;
}
double calcuper(int x)
{
	return 2 * cir*x;
}