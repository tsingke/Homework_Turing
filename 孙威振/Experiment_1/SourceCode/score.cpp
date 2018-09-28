#include "work.h"
#include <iostream>
#include <cstdio>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
	work wo;
	wo.readData();
	wo.sortScore();
	wo.check();
	wo.var();
	return 0;
}






