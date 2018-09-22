
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"


int main()
{
	printf("******************************\n");
	printf("       学生成绩管理分析系统        \n");
	printf("         Tonghui Mu           \n");
	printf("******************************\n\n");

	int N = 0;  

	SS  *pstu = NULL;
	class SS
	{
	private:
		char number[6];
		char name[6];
		int dailyScore;
		float generalScore;
		int place;
	public:
		void readData();
		void calcuScore();
		void printOut();
		void sortScore();

	}
	system("pause");

	return 0;
}