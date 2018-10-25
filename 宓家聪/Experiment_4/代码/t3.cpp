#include <iostream>
using namespace std;

int main()
{
	int *ptr;
	ptr = new int[20];
	cout << "请输入数据个数：";
	int num;
	cin >> num;
	cout << "请输入数据:" << endl;
	int posnum = 0;
	int negnum = 0;
	int sum = 0;
	for (int i=0; i<num; i++)
	{
		cin >> ptr[i];
		sum += ptr[i];
		if (ptr[i] > 0)
		{
			posnum++;
		}
		else if (ptr[i] < 0)
		{
			negnum++;
		}
	}
	cout << "数据中正数为：" << posnum << endl;
	cout << "数据中负数为：" << negnum << endl;
    cout << "数据均值为：" << sum/num << endl;
    int sum2 = 0;
    for(int i=0; i<num; i++)
    {
        sum2 += (ptr[i] - sum)*(ptr[i] - sum);
    }
    cout << "数据方差为："  << sum2/num << endl;
	delete[] ptr;

	return 0;
}
