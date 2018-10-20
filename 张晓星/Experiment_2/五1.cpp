#include<iostream>
#include<Windows.h>
const double PI = 3.14;
using namespace std;
int main()
{
	float R, C, S;
	cin >> R;
	C = 2 * PI*R;
	S = PI * R*R;
	cout << "C=" << C << endl << "S=" << S << endl;
	system("pause");
	return 0;

}