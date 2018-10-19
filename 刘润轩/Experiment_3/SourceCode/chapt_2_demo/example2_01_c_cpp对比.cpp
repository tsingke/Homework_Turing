

#include <iostream>
using namespace std;

int main()
{
	char c;                           
	float f;
	int a;
	cin >> c >> a >> f;                

	a = a + c;
	f = f + 2 * a;
	cout << "c=" << c << " a=" << a << " f=" << f << endl;
	return 0;
}
