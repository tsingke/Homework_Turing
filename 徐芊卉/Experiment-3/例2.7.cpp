#include<iostream>
using namespace std;
void fun(int i, int j = 5, int k = 10);
int main()
{
	fun(20);
	fun(20, 30);
	fun(20, 30, 40);
	system("pause");
	return 0;
}
void fun(int i, int j, int k)
{
	cout << i << " " << j << " " <<k<< endl;
}