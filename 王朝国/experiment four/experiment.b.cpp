#include <stdio.h>
#include <string.h>
struct birth
{
    int year;
    int month;
    int day;
};
struct student
{
    char name[20];
    int age;
    int score;
    struct birth bt;
};
void outputst(struct student stu[])
{
    int i;
    printf("output student information:name  age score year month  day:\n");
    for(i=0;i<5;i++)
    {   
        printf("%s,%d,%d,%d,%d,%d",stu[i].name,stu[i].age,stu[i].score,stu[i].bt.year,stu[i].bt.month,stu[i].bt.day);
    }
}
void min(struct student stu[],int *n)
{
    int i,max=stu[0].score;
    for(i=0;i<5;i++)
        if(stu[i].score>max)
            *n=i;
}
void outputmin(struct student stu[],int n)
{
    printf("max student information\n");
    printf("%s,%d,%d,%d,%d,%d\n",stu[n].name,stu[n].age,stu[n].score,stu[n].bt.year,stu[n].bt.month,stu[n].bt.day);

}
int main()
{
    
    min(st,&t);
    outputmin(st,t);
    return 0;
}