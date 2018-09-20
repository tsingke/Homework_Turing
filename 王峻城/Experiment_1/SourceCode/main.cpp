#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

FILE *fp = NULL;
int num, cnt;
struct stuff{
    char number[10];
    char name[10];
    float dailyScore;
    float testScore;
    float finalScore;
    float generalScore;
};
bool cmp(stuff a, stuff b) //按照总成绩排名，若成绩相同，学号小的优先
{
    if(a.generalScore > b.generalScore)
        return 1;
    else if(a.generalScore == b.generalScore)
    {
        if(a.number < b.number)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}
void ReadStudent(stuff *stu)
{
    //录入学生成绩
    printf("读入的学生成绩为：\n");
    while((!feof(fp)) && (cnt < num))
    {
        fscanf(fp, "%s%s%f%f%f\n", (stu[cnt].number),(stu[cnt].name),&stu[cnt].dailyScore,&stu[cnt].testScore,&stu[cnt].finalScore);

        printf("学号：%s\t姓名：%s\t平时成绩：%.2f\t实验成绩：%.2f\t期末成绩：%.2f\n", (stu[cnt].number),(stu[cnt].name),(stu[cnt].dailyScore),(stu[cnt].testScore),(stu[cnt].finalScore));
        cnt++;
    }
}
void TotalScore(stuff *stu)
{
    //总成绩
    printf("\n学生的总成绩:\n");
    for(int i=0; i<num; i++)
    {
        stu[i].generalScore = stu[i].dailyScore * 0.2 + stu[i].testScore * 0.2 + stu[i].finalScore * 0.6;
        printf("学号：%s\t姓名：%s\t总成绩：%.2f\n",(stu[i].number),(stu[i].name),(stu[i].generalScore));
    }
}
void StudentRank(stuff *stu)
{
    //排名
    printf("\n学生名次:\n");
    sort(stu, stu+num, cmp);
    for(int i=0; i<num; i++)
    {
        printf("学号：%s\t姓名：%s\t成绩：%.2f\t名次：%d\n",(stu[i].number),(stu[i].name),(stu[i].generalScore),i+1);
    }
}
int myPow(int x)
{
    return (x*x);
}
void OtherScore(stuff *stu)
{
    printf("\n均值:\n");
    int ans1 = 0;
    for(int i=0; i<num; i++)
    {s
        ans1 += stu[i].generalScore;
    }
    cout << ans1/num <<endl;
    ans1 /= num;
    printf("\n方差:\n");
    int ans2 = 0;
    for(int i=0; i<num; i++)
    {
        ans2 += myPow(stu[i].generalScore - ans1);
    }
    cout << ans2/num << endl;
}
int main()
{
    fp = fopen("data.txt", "r");
    //学生数目
    num = 0;
    if(fp != NULL)
    {
        fscanf(fp,"%d",&num);
    }
    printf("学生数目为：%d\n",num);
    cnt = 0;
    stuff stu[num];
    //录入学生成绩
    ReadStudent(stu);
    //总成绩
    TotalScore(stu);
    //排名
    StudentRank(stu);
    OtherScore(stu);
    fclose(fp);
    return 0;
}
