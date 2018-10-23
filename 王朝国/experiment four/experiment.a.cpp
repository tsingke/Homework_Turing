#include<iostream>
#include<math.h>
Using namespace std;
Int main()
int * p = new int(20);
memset(p, 0, 20);
p[0] = 0;
p[1] = 1;
p[2] = -1;
p[3] = -2;
int k = 0;
int h = 0;
int num = 20;
for ( int i = 0; i < 20; i++)
{
if ( p[i] > 0 )
k++;
else if ( p[i] < 0 )
h++;
else
continue;
}

if ( k > 20 || k < 1 )
cout<<"number error.\n"; 
if ( h > 20 || h < 1 )
cout<<"number error.\n"; 

cout<<"There are "<<num<<" figures,\n"; 
cout<<k<<" of them are positive numbers,\n"; 
cout<<h<<" of them are negatives.\n";
Return 0;
}