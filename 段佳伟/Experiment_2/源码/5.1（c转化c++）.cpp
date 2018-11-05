#include<iostream>
#include<Windows.h>
using namespace std;
int add(int a, int b) {
	return a + b;
}
int main() {
	int x, y, sum;
	cout << "Please input x and y :\n" << endl;
	cin >> x >> y;
	sum = add(x, y);
	cout << sum << endl;
	system("pause");
	return 0;
}
