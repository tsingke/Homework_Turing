#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

const double esp = 0.00000001;

int main()
{
	int i=0 , a=0, b=0;
	double ave, var = 0.0, sum=0;
	double *p = new double[20];
	printf("请输入若干数，输入end加回车结束输入\n");
	while (cin >> p[i] )
	{
		if(p[i]>0) a++;
		else if(p[i]<0) b++;
		sum += p[i];
		i++;
	}
	ave = sum/double(i);
	for(int j=0; j<i; j++)
    {
        var += (p[j]-ave)*(p[j]-ave);
    }
    var = var/double(i);
	sort(p, p+i);
	printf("正数个数： %d\t负数个数： %d\n平均值：%.2f\t方差：%.2f\从小到大输出：\n", a, b, ave, var);
	for(int j=0; j<i; j++)
    {
        cout << p[j] <<" ";
    }
    cout << endl;
	delete []p;
	return 0;
}

