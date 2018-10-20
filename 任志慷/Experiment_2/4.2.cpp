#include <iostream>
using namespace std;
int main() {
	int arr[4] = { 1,2,3,4 };
	int *a = arr;
	int *p = a;  //Ö¸ÕëÒıÓÃ
	p++;
	*p = 100;
	cout << *a << " " << *p << endl;
	for (int i = 0; i < 4; i++)
		cout <<arr[i]<<" "<<endl;
	int b = 10;
	p = &b;
	cout << *a << " " << *p << endl;
	for (size_t i = 0; i < 4; i++)
		cout << arr[i] << " " <<endl;
	system("pause");
	return 0;
}