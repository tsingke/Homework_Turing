#include<iostream>
using namespace std;
class B
{
private:
    int x,y;
public:
    B()
    {
        x=y=0;
        cout<<"con1\n";
    }
    B(int i)
    {
        x=i;
        y=0;
        cout<<"con2\n";
    }
    B(int i,int j)
    {
        x=i;y=j;
        cout<<"con3\n";

    }
    ~B()
    {
        cout<<"delete\n";

    }
};
int main()
{
   B *p;
  p=new B[3];
  p[0]=B();
  p[1]=B(1);
  p[2]=B(1,2);
  delete []p;
  return 0;

}




