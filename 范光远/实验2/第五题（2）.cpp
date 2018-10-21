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
   cout<<"请输入圆半径："; 
   cin>>r;
   area=S(r);
   perimeter=L(r);
   cout<<"圆的面积为："<<area<<endl<<"圆的周长为："<<perimeter<<endl; 
   return 0;
} 
