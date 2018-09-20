#include <iostream>
#include "score.h"

using namespace std;
int main()
{
	SS stu[5];
	readData(stu, 5);

	calcuScore(stu, 5);

	sortScore(stu, 5);

	printOut(stu, 5);
	system("pause");
	return 0;
}

