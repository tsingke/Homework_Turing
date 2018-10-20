#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


float checkAgeScore( int age, float score )
{

    bool f = 1;
    if( (age < 16 || age > 25) && (score <0 || score > 5))
    {
        f = 0;
        throw -1;
    }
    else
        if( score <0 || score > 5 )
    {
        f = 0;
        throw  -2;
    }
    else
        if( age < 16 || age > 25)
    {
        f = 0;
        throw -3;
    }
    if( f == 1 )
        return 20*score;
}
int main()
{
    char name[20];
    int age;
    float score;
    bool f = 1;
    scanf("%s%d%f", name, &age, &score);
    try
    {
        checkAgeScore( age, score);
    }

    catch( int e )
    {
        f = 0;
        if( e == -3)
        printf("age is invaild\n");
        else
            if( e == -2 )
        {
            printf("score is invaild\n");
        }
        else
        {
            printf("score is invaild  age is invaild\n");
        }
    }

    if( f  == 1 )
    {
        cout<<name<<' '<<age<<' '<<checkAgeScore( age, score )<<endl;
    }
    return 0;
}
