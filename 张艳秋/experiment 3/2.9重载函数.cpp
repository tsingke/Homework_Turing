#include<iostream>

using namespace std;
int square(int x)
{
	return x * x;
}

float square(float x)
{
	return x * x;
}

double square(double x = 1.5)
{
	return x * x;
}
int main()
{
	cout << "square()=" << square() << endl;
	cout << "square(10)=" << square(10) << endl;
	cout << "square(2.5f)=" << square(2.5f) << endl;
	cout << "square(1.1)=" << square(1.1) << endl;
	system("pause");
	return 0;
	
}

