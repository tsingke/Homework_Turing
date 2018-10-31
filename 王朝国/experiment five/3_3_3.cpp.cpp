#include<iostream>
using namespace std;
class Sample
{
	int x;
public:
	void setx(int i)
	{
		x=i;
	}
	int getx()
	{
		return x;
	}
};
int main()
{
	Sample a[3], *p;
	int i=0;
	for (p=a; p<a+3; p++)
		p->setx(i++);
	for(i=0;i<3;i++)
	{
		p=&a[i];
		cout<<p->getx()<<" ";
	}
	return 0;
}