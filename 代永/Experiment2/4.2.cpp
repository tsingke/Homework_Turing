#include<iostream>
using namespace std;
int main()
{
	int arr[4]={1,2,3,4};
	int*a=arr;
	int*&p=a;
	p++;
	*p=100;
	cout<<*a<<" "<<*p<<endl;
	for(int i=0;i<4;i++)
	   cout<<arr[i]<<" ";
	cout<<endl;
	int b=10;
	p=&b;
	cout<<*a<<" "<<*p<<endl;
	for(int i=0;i<4;i++)
	   cout<<endl;
	cout<<endl;
	return 0;
} 
