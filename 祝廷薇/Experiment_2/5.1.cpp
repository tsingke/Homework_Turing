#include<iostream>
using namespace std;
int add(int a,int b);
int main()
{
	int x,y,sum;
	cout<<"x="<<x<<"y="<<y<<endl;
	cin>>x>>y;
	sum=add(x,y);
	cout<<"x+y="<<x<<y<<endl;
	return 0;
}
int add(int a,int b)
{
return a+b;
}
