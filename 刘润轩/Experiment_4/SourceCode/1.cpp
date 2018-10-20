#include<iostream>
using namespace std;
int main()
{
	float *p, a = 0, b = 0,c=0,d=0,sum=0,aver=0,vari=0,varisum=0; //a是整数，b是负数，c是整数，d是小数
	float l = 0;
	int i;//aver平均数   vari方差
	p = new float[20];
	cout << "请输入20个数" << endl;
	for (i = 0; i < 20; i++)//输入
	{
		cin >> p[i];
		if (p[i] > 0)
			a++;
		if (p[i]<0)
			b++;

		{
			if (p[i] == int(p[i]))
			c++;
		else
			d++;
		}
		sum += p[i];

	}
	     
	aver = sum / 20;
	

	for (int k = 0; k < 20; k++)
	{
		l = (p[k] - aver)*(p[k] - aver);
			varisum += l;
	}

	vari = varisum / 20;

	cout << "输入完毕" << endl;

	for (int i = 0; i < 20; i++)
	{
		for (int j = i + 1; j < 20; j++)
		{
			if (p[i] > p[j])    //如果前一个元素大于后一个元素
			{
				float temp;        //临时变量
				temp = p[i];
				p[i] = p[j]; //小的元素到前一个位置
				p[j] = temp;   //大的元素到后一个位置
			}
		}
	}
	// 输出各元素
	for (int k = 0; k < 20; k++)
		cout << p[k] << endl;
		                   



	cout << "正数为" <<  a << endl;
	cout << "负数为" <<  b << endl;
	cout << "整数为" <<  c << endl;
	cout << "小数为" <<  d << endl;
	cout << "平均数为" <<  aver << endl;
	cout << "方差为" <<  vari << endl;
	  
	delete[]p;
	system("pause");
	return 0;
}