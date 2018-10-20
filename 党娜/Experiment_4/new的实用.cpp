//用new建立数组
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int *ptr;
	int i,j;
	int sum1 = 0,sum2=0;
	double aver;
	double E;//方差
	int trans;
	ptr = new int[20];
	cout << "请输入数据" << endl;
	for (i = 0; i < 20; i++)
		cin >> *(ptr + i);
	for (i = 0; i < 20; i++)//计算正负数的分别个数
	{
		if (*(ptr + i) < 0)
		{
			sum1 = sum1 + 1;
			
		}
		if (*(ptr + i) > 0)
		{
			sum2 = sum2 + 1;
			
		}
	}
	cout << "这些数据中的负数有" << sum1 << "个" << endl;
	cout << "这些数据中的正数有" << sum2 << "个" << endl;

	for (i = 0;i < 20;i++)//计算均值和方差
	{
		aver = (*ptr + *(ptr + i)) / 20;
		E = ((*ptr - aver)*(*ptr - aver) + (*(ptr + i) - aver)*(*(ptr + i) - aver)) / 20;
	}
	cout << "均值为" << aver << endl;
	cout << "方差值为" << E << endl;

	//下面进行排序
	for (i = 0;i < 20;i++)
	{
		for(j=0;j<20;j++)
			if (*(ptr + i) < *(ptr + j))
			{
				trans = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = trans;
			}

	}	
	cout << "数组中各元素按照从小到大的顺序输出为：" ;
	    for (i = 0;i < 20;i++)
		cout<<  *(ptr+i)<<" ";
		delete[]ptr;
	system("pause");
	return 0;
	
		

}
