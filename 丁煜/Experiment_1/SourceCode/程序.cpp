#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;
struct Student
{
    string sid;   //学号
    string name;  //名称 
    int score[4];   //四种成绩
    int ran;    //名次
};
Student stu[6];
bool compare(Student a, Student b)
{
    return a.score[3]>b.score[3];
}
int main()
{
    int i, j, aver, var, k = 1;
    int sum = 0, a = 0;
    string s;
    Student t;
    ifstream fin("data.txt");
    if(!fin)
    {
        cout<<"Cannot open the file!";
        return 0;
    }
    while(!fin.eof())
    {
        for(i = 0; i < 6; i++)
        {
            fin>>stu[i].sid;
            fin>>stu[i].name;
            fin>>stu[i].score[0];
            fin>>stu[i].score[1];
            fin>>stu[i].score[2];
            stu[i].score[3] = 0.2*stu[i].score[0] + 0.2*stu[i].score[1] + 0.6*stu[i].score[2];
        }
    }
    sort(stu,stu+6,compare);
    for(i = 0; i < 6; i++)
    {
        stu[i].ran = k;
        k++;
        cout<<stu[i].ran<<" "<<stu[i].sid<<" "<<stu[i].name<<" "<<stu[i].score[0]<<" "<<stu[i].score[1]<<" "<<stu[i].score[2]<<" "<<endl;

    }
    cout<<"请输入学号查询："<<endl;
    cin>>s;
    for(i = 0; i < 6; i++)
    {
        if(stu[i].sid == s)
            cout<<stu[i].ran<<" "<<stu[i].name<<" "<<stu[i].score[0]<<" "<<stu[i].score[1]<<" "<<stu[i].score[2]<<" "<<endl;
    }
    for(i = 0; i < 6; i++)
    {
        sum = stu[i].score[3] + sum;
    }
    aver = sum / 6;
    for(i = 0; i < 6; i++)
    {
        a = (stu[i].score[3]-aver)*(stu[i].score[3]-aver) + a;
    }
    var = a / 6;
    cout<<"均值为："<<aver<<" "<<"方差为:"<<var<<endl;
}