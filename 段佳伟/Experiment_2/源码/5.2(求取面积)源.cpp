#include<iostream>
#include<Windows.h>
using namespace std;
const double PI = 3.14159;
double square(double r){
	return r*r*PI;
}
int main() {
	double x ,s;
	cout << "请输入所计算圆的半径" << endl;
	cin >> x ;
	s= square(x);
	cout << s << endl;
	system("pause");
	return 0;
}
