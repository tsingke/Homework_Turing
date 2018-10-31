#include<iostream>
using namespace std;
class base
{
	int n;
public:
	base(int i)
	{
		n=i;
	}
	friend int add(base &s1,base &s2);
};
int add(base &s1,base &s2)
{
	return s1.n+s2.n;
}
int main()
{
	base A(29),B(11);
	cout<<add(A,B)<<endl;
	return 0;
}