#include<iostream>
using namespace std;
#define PI 3.1415926

class Circular {
public:
	void change(double x);
	void showoff();
private:
	double radius;
	double area;
	double perimeter;
};

void Circular::change(double x) {
	radius = x;
	double area1 = PI * x * x;
	double perimeter1 = 2 * PI * x;
	area = area1;
	perimeter = perimeter1;
}

void Circular::showoff() {
	cout << "圆周长为" << perimeter << endl;
	cout << "圆面积为" << area << endl;
}

int main() {
	double x;
	cout << "please input radius" << endl;
	cin >> x;
	Circular Y;
	Y.change(x);
	Y.showoff();
	return 0;
}

