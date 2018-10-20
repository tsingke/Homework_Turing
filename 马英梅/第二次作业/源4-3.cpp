#include <iostream>
using namespace std;
int i= 0;
int main()
{
   int  i = 5;
   { int i;
   i = 7;
   cout << "::i = " << ::i << end1;
   cout << " i = " << i << end1;
   ::i = 1;
   cout << " ::i= " << ::i << endl;
}
cout <<" i= "<< i<< end1;
cout << " ::i= "<< ::i << end1;
i+=::i;
::i = 100;
cout << "i =" << i << end1;
cout << "::i = "<< ::i << end1;
system("pause");
return 0;
}
