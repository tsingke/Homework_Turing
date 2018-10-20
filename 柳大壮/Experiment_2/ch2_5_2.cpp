#include<cstdio>

using namespace std;
const double pi = 3.14159265358;
int main()
{
    int r;
    double a;
    printf("请输入圆的半径\n");
    scanf("%d", &r);
    a = (double)r;
    printf("圆的面积为:  %.fpi(约等于%f)\n圆的周长为:  %.fpi(约等于%f)\n", a*a, pi*a*a, 2*a, 2*pi*a);
    return 0;
}
