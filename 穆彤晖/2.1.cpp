/*#include<stdio.h>
int main()
{
	char c;
	int a;
	float f;
	scanf("%c %d %f", &c, &a, &f);
	a = a + c;
	f = f + 2 * a;
	printf("c=%c a=%d f=%.1f\n", c, a, f);
	return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
	char c;
	int a;
	float f;
	cin >> c >> a >> f;
	a = a + c;
	f = f + 2 * f;
	cout << "c=" << c << "a=" << a << "f=" << f << endl;
	system("pause");
	return 0;
}