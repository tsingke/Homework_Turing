#include<iostream>
#include<Windows.h>
using namespace std;
class B
{
	int x, y;
public:
	B()
	{
		x = y = 0;
		cout << "con1\t";
	}
	B(int i)
	{
		x = i; y = 0;
		cout << "con2\t";
	}
	B(int i, int j)
	{
		x = i; y = j;
		cout << "con3\t";
	}
	~B()
	{
		cout << "Des\t";
	}
};
int main()
{
	B *ptr;
	ptr = new B[3];
	ptr[0] = B();
	ptr[1] = B(1);
	ptr[2] = B(2, 3);
	delete[]ptr;
	system("pause");
	return 0;
}