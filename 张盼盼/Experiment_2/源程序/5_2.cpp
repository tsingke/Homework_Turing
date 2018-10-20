#include <cstdio>
#include <iostream>
using namespace std;

#define pi 3.1415

int main()
{
    int r;
    cout<<"请输入半径"<<endl;
    cin>>r;
    double s = pi*r*r;
    double l = 2*pi*r;
    cout<<"面积:"<<s<<endl<<"周长:"<<l<<endl;
}
