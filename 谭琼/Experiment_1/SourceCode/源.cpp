#include <iostream>
#include <cmath>
#include "score.h"

using namespace std;
int main()
{
	//int N=5;
	SS stu[5];
	readData(stu, 5);

	//readDataFromFile(&N);

	calcuScore(stu, 5);

	sortScore(stu, 5);

	printOut(stu, 5);

	searchInformation(stu, 5);

	//calcuAver(stu, 5);		为了避免重复输出平均数，故将计算平均值的函数注释掉

	calcuVar(stu, 5);
	system("pause");
	return 0;
}

