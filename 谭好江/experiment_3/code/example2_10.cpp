#include<iostream>
using namespace std;
int x=5,y=10;
int &r=x;
void print()
{
	cout<<"x="<<x<<"  y="<<y<<"  r="<<r<<endl;
	cout<<"Adress of x  "<<&x<<endl;
	cout<<"Adress of y  "<<&y<<endl;
	cout<<"Adress of r  "<<&r<<endl;
}

int main()
{
	print();
	r=y;
	y=100;
	print();
	x=200;
	print();
	system("pause");
	return 0;
}