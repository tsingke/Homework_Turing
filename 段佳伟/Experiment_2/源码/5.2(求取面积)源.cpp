#include<iostream>
#include<Windows.h>
using namespace std;
const double PI = 3.14159;
double square(double r){
	return r*r*PI;
}
int main() {
	double x ,s;
	cout << "������������Բ�İ뾶" << endl;
	cin >> x ;
	s= square(x);
	cout << s << endl;
	system("pause");
	return 0;
}
