#include<iostream>
using namespace std;
const double PI=3.14159;
double S(double r)
{
	return PI*r*r;
}
double L(double r)
{
	return 2*PI*r;
}
int main()
{
   double r,area,perimeter; 
   cout<<"������Բ�뾶��"; 
   cin>>r;
   area=S(r);
   perimeter=L(r);
   cout<<"Բ�����Ϊ��"<<area<<endl<<"Բ���ܳ�Ϊ��"<<perimeter<<endl; 
   return 0;
} 
