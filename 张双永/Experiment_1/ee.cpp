#include<iostream>
#include<fstream>
#include<string.>
#include<algorithm>
using namespace std;

struct student
{
	string sid;
	string name;
	int score[3];
	int total;
	int rank;
}stu[6];

bool comp(student a, student b)
{
	return a.total > b.total;
}

int main()
{
	int n = 0;
	ifstream in("data.txt", ios::in);
	if (!in.is_open())
	{
		cout << "error:opening file fail" << endl;
		exit(1);
	}
	while (!in.eof() && n < 6)
	{
		in >> stu[n].sid >> stu[n].name >> stu[n].score[0] >> stu[n].score[1] >> stu[n].score[2];
		n++;
	}
	for (int i=0;i<6;i++)
	{
		cout << stu[i].sid << " " << stu[i].name;		
		cout << " 平时成绩:" << stu[i].score[0] << " 实验成绩:" << stu[i].score[1] << " 期末成绩:" << stu[i].score[2] << endl;

	}
	for (int z=0;z<6;z++)
	{
		stu[i].total = (0.2*stu[i].score[0]) + (0.2*stu[i].score[1]) + (0.6*stu[i].score[2]);

	}
	sort(stu, stu + 6, comp);	
	for (int j = 0; j < 6; j++)		
		stu[j].rank = j + 1;	
	    string sid1;	
	    cin >> sid1;        
             for (int k = 0; k < 6; k++)
                 { 
				    if (sid1 == stu[k].sid)            
                        { 
						cout << "平时成绩" << stu[k].score[0] << " 实验成绩" << stu[k].score[1] << " 期末成绩" << stu[k].score[2];
                         cout << " 总成绩" << stu[k].total << " 名次" << stu[k].rank << endl;
						 break; }
					else if (k >= 6)
						cout << "输入错误" << endl; 
			 }	
			 return 0;


}




