#include<iostream>
using namespace std;
int add(int a, int b) //求和函数
{
    return a+b;
}
int main()
{
    int x, y, sum;
    cout << "Please input x and y" << endl;
    cin >> x >> y;//输入变量x和y的值
    sum = add(x, y);
    cout << x << '+' << y << '=' << sum;
    return 0;
}
