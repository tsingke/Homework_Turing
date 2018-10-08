#include<iostream>
using namespace std;

int main()
{
	void*vp;
	char c = 'A';
	short int x = 97;
	vp = &c;
	cout << *(char *)vp << " " << *(short int*)vp << endl;
	vp = &x;
	cout << *(short int *)vp << " " << *(char*)vp << endl;
	system("pause");
	return 0;
}