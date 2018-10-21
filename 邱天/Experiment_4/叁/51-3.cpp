#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int* pa = new int[20];
	int record = 0;
	int a = 0, b = 0;
	while (cin >> pa[record])
		record++;

	for (int y = 0; y < record; y++) {
		if (pa[y] > 0)
			a++;
		if (pa[y] < 0)
			b++;
	}
	
	/*排序*/
	cout << "正数：" << a << endl;
	cout << "负数：" << b << endl;
	int temp;
	int maxIndex;
	for (int i = 0; i < record; i++) {
		
		for (int j = i + 1; j < record; j++) {
			maxIndex = i;
			if (pa[j] <= pa[maxIndex]) {     // 寻找最小的数
				maxIndex = j;                 // 将最小数的索引保存
			}
			temp = pa[maxIndex];
			pa[maxIndex] = pa[i];
			pa[i] = temp;
		}
	}

	/*输出*/
	cout << "按从小到大顺序排序:" ;
	for (int y = 0; y < record; y++) {
		cout << pa[y] << "   ";
	}
	cout << endl;
	/*均值和方差*/
	double sum1 = 0;
	for (int i = 0; i < record; i++) {
		sum1 += pa[i];
	}
	double ave = sum1 / record;
	cout << "这几个数的均值为" << ave << endl;

	double sum2 = 0;
	for (int i = 0; i < record; i++) {
		sum2 += (pa[i] - ave) * (pa[i] - ave);
	}
	double variance = sum2 / record;
	cout << "这几人数的方差为" << variance << endl;

	/*释放内存*/
	delete[]pa;
	return 0;
}