



// 成绩管理系统.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include"work.h"
#include<iostream>
#include<cstdio>
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