#include<iostream>
using namespace std;
int main()
{
	char c;
	int a;
	float f;
	cin >> c >> a >> f;
	a = a + c;
	f = f + 2 * a;
	cout << "c=" <<c<< "   a=" << a << "   f=" << f << endl;
	system("pause");
	return 0;
	
}