#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<windows.h>

using namespace std;

int i = 0;

void f(double x = 50.6, int y = 10, char z = 'A')
{
	cout << "X == " << x << "y == " << y << "z == " << z << endl;
}

int & s(const int &a, int &b)
{
	b += a;
	return b;
}

void fun(int x, int &y)
{
	x += y;
	y += x;
}

int main()
{
	//4-1
	//int a, b, c;
	//char ch;
	//cin >> a >> ch >> b >> c;
	//cout << a << endl << ch << endl << b << endl << c << endl;
	////运行结果：
	///*23.56 10  90
	//	23
	//	.
	//	56
	//	10*/



	////4-2
	//int arr[4] = { 1, 2, 3, 4 };
	//int *a = arr;
	//int *&p = a;
	//p++;
	//*p = 100;
	//cout << *a << "  " << *p << endl;  //结果 100  100
	//for (int i = 0; i < 4; i++) {
	//	cout << arr[i] << "  ";   //1  100  3  4
	//}
	//cout << endl;
	//int b = 10;
	//p = &b;  //这里相当于a里面存储的地址换成了&b了
	//cout << *a << "  " << *p << endl;  //10  10
	//for (int i = 0; i < 4; i++)
	//	cout << arr[i] << " ";  //1 100 3 4
	//cout << endl;
	

	////4-3
	//int i = 5;
	//{
	//	cout << i << endl;  //5
	//	int i;
	//	i = 7;
	//	cout << "::i == " << ::i << endl;  // 0
	//	cout << "i == " << i << endl;  // 7
	//	::i = 1;
	//	cout << "::i == " << ::i << endl; // 1
	//}
	//cout << "i == " << i << endl; // 5
	//cout << "::i == " << ::i << endl; //1
	//i += ::i;
	//::i = 100;
	//cout << "i == " << i << endl;  // 6
	//cout << "::i == " << ::i << endl;  // 100


	////4-4
	//double a = 216.34;
	//int b = 2;
	//char c = 'E';
	//f();                        //X == 50.6y == 10z == A
	//f(a);                       //X == 216.34y == 10z == A
	//f(a, b);                    //X == 216.34y == 2z == A
	//f(a, b, c);                 // X == 216.34y == 2z == E


	////4-5
	//int x = 500, y = 1000, z = 0;
	//cout << x << '\t' << y << '\t' << z << endl;  //500     1000    0
	//s(x, y);
	//cout << x << '\t' << y << '\t' << z << endl;  //500     1500    0
	//z = s(x, y);
	//cout << x << '\t' << y << '\t' << z << endl;  //500     2000    2000
	//s(x, y) = 200;
	//cout << x << '\t' << y << '\t' << z << endl;  //500     200     2000
	
	
	// int x = 5, y = 10;
	// fun(x, y);
	// fun(y, x);
	// cout<<"x = "<<x<<",y = "<<y<<endl;
	// return 0;

	system("pause");
	return 0;
}