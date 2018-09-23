#include <stdio.h>
#include <stdlib.h>
 struct student
 {
	  int number;//学号
	 char name[1024];//姓名
	
	 int dailyScore;//平时成绩
	 int generalSocre;//实验成绩
	 int finalSocre;//期末成绩
	 int score;//总成绩
	 int place;//名词
 };
void main()
{
	
struct student stu[0]={2017000001 "姚期智" 90 85 98 0 0};
struct student stu[1]={2017000002 "周光远" 85 87 92 0 0};
struct student stu[2]={2017000003 "孙家栋" 89 84 96 0 0};
struct student stu[3]={2017000004 "杨芙清" 95 76 98 0 0};
struct student stu[4]={2017000005 "张朝阳" 78 80 88 0 0};
struct student stu[5]={2017000007 "李彦弘" 82 90 85 0 0};
int i;
//填入总成绩
for(i=0;i<6;i++){
	 stu[i].score=stu[i].dailyScore*0.2+stu[i].generalSocre*0.2+ stu[i].finalSocre;
}

//冒泡排序进行名次排序
int t,k,p;
int j=0;
for(k=0;k<6;k++){
	stu[k].place=k+1;
for(j=k;j<6;j++){
if(stu[j].score > stu[k].score){
	stu[j].place=stu[k].place;
stu[k].place=stu[j].place+1;
}
}
}//(youwenti)


//第二题打印出学生信息
 printf("学号: 姓名：平时成绩：实验成绩：期末成绩：总成绩  排名：\n");
	for (i = 0; i < 6; i++){
		printf("%d,%s,%d ,%d,%d,%d,%d /n", stu[i].number,stu[i].name,stu[i].dailyScorescore,generalScore[i],stu[i].finalScore,stu[i].score,stu[i].place);
	printf("\n");
}



//第三题根据学号看排名
int n;
printf("print in number");
scanf(%d,&p);
for(n=0;n<6;n++){
if(stu[i].number==p){
printf(%d\n",stu[i].place);
}
}



//第四题求方差和均值
int variance l ;
int average h;
int he=0;
int x=0;
for(h=1;h<6;h++){
he=stu[h].score+he;
}
average=he/6;
for(l=0;l<6;l++){
 x=(averge-stu[l].score)*(averge-stu[l].score)+x;
}
variance=x/6;








	