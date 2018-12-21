#include "Vectors.h"
int main()
{
	cout << "本类中，默认所有向量起始点为（0，0）；" << endl;
	Vectors a(1, 3), b(4, 2), c, d;
	c = b - a;
	d = a + b;
	cout << "向量A = ";
	a.print();
	cout << "向量B = ";
	b.print();
	cout << "向量C = B - A = ";
	c.print();
	cout << "向量D = A + B = ";
	d.print();

	system("pause");
	return 0;
}