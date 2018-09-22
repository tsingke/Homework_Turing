#include "score.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	int N;
	//N=readData();
N = readDataFromFile();
	calcuScore();
	sort(N);
	printOut();
	variance();
	analyse();
	label:
	search();
	goto label;

	return 0;
}