#include <cstdio>
#include "work.h"
#include <iostream>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
	student per[50];
	fstream read;
	read.open("read.txt");
	int cnt = 0;
	while (read.peek() != EOF) {
		
		string id;
		string name;
		int daily;
		int experiment;
		int fina;
		read >> id;
		read >> name;
		read >> daily;
		read >> experiment;
		read >> fina;
		cnt++;
		cout << cnt << endl;
		per[cnt].id = id;
		per[cnt].name = name;
		per[cnt].daily = daily;
		per[cnt].experiment = experiment;
		per[cnt].fina = fina;
	}
	for (int i = 1; i <= cnt; i++)
	{
		cout << per[i].id << ' '
			<< per[i].name << ' '
			<< per[i].daily << ' '
			<< per[i].experiment << ' '
			<< per[i].fina << endl;
	}
	read.close();
	system("pause");

	return 0;
}