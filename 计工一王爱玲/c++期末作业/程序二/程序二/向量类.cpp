#include<iostream>
using namespace std;
class Vectors
{
	double x;
	double y;
public:
	Vectors(double a = 0.0, double b = 0.0)
	{
		x = a; y = b;
	}

	void set(double a, double b)
	{
		x = a; y = b;

	}


	//成员函数的形式重载+
	Vectors operator+(Vectors p)
	{
		x = x + p.x;
		y = y + p.y;
		return *this;

	}
	void show()
	{
		cout << "节点坐标是：";
		cout << x << " " << y << endl;
	}


};
int main()
{
	Vectors a(2.0, 3.0);
	Vectors b(1.0, 1.0);
	//a+=b;
	a = a + b;
	a.show();
	Vectors m, n;
	cout << "输入你要相加的向量的横纵坐标:";
	double x1,x2, y1,y2;
	cin >> x1 >> y1;
	cout << endl;
	cout << "输入你要相加的向量的横纵坐标:";
	cin >> x2 >> y2;
	cout << endl;
	m.set(x1, y1);
	n.set(x2, y2);
	m = m + n;
	m.show();


	system("pause");
	return 0;
}
