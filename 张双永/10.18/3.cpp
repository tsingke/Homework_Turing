#include<iostream>
using namespace std;
int main()
{
	int *p,i,a=0,b=0;
	
	p = new int[20];
	for (i = 0; i < 20; i ++ )
	{
		cin >> p[i];
		if (p[i] > 0)
			a++;
		if (p[i]< 0)
			b++;
	}



	for(int j=0;j<20;j++)
	{
		for(int k=1;k<20-j;k++)
	
			if(p[j]>p[j+k])
			{
				int temp=p[j];
				p[j]=p[j+k];
				p[j+k]=temp;
			}
	}

	int l=0;
	for(i=0;i<20;i++)
	{
		cout<<p[i]<<"  ";
		l+=p[i];
	}
	l=l/20;

	int s=0;
	for(i=0;i<20;i++)
	{
		s=s+(l-p[i])*(l-p[i]);

	}
	s=s/20;
	cout<<endl;





		cout <<"平均数为"<<l<<endl<<"方差为"<<s<<endl<< "正数为" << a << endl;
		cout << "负数为" << b<<endl;
		delete[]p;

	return 0;
}