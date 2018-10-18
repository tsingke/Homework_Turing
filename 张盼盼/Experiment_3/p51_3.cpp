#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    double *q, *p;
    q = p = new double[25];
    int n, i , j;
    int cnt1  = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    scanf("%d", &n);
    for( i = 0; i<n; i++)
    {
        scanf("%lf", p);
        int temp = int( *p );
        if( *p == temp )
            cnt3++;
        if( *p != temp )
            cnt4++;
        if( *p < 0 )
            cnt2++;
        if( *p > 0 )
            cnt1++;
        p++;
    }
    sort( q, q+n);
    for( p = q; p < q+n; p++)
    {
        printf("%f ", *p);
    }
    printf("\n正数:%d\n负数:%d\n整数:%d\n小数:%d\n", cnt1, cnt2, cnt3, cnt4);
    delete( q );

}
