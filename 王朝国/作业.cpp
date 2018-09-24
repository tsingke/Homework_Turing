#include<iostream>
#define max 5
using namespace std;
struct student//////////定义数组结构体
{
int xuehao; //学号
char name[10]; //姓名
char sex; //性别
int age; //年龄
}stu[max];
//////定义数型
char a; //全局函数a(操作数)
int i; //全局函数i(循环操作数)
//////////函数列表
void display(); //屏显函数
void init(); //数组结构体初始化函数
void xuanze(); //选择操作数函数
void sys(char a); //根据操作数执行函数
void addf(); //增加数据的函数
void delf(); //删除数据的函数
void inqf(); //查询数据的函数
//////////////////////屏显
void display()
{
cout<<" ==========Welcome to Student Manager System!=========="<<endl;
cout<<endl;
cout<<" A: Add new student"<<endl;
cout<<" D: Delete a student"<<endl;
cout<<" I: Inquiry a student"<<endl;
cout<<" Q: Quit"<<endl;
cout<<endl;
xuanze();
}
/////////////////////////////信息初始化
void init()
{
for(i=0;i<max;i++)
{
stu[i].name[10]='\0';
stu[i].sex='\0'; //初始化所有的sex为'\0'
stu[i].age=0;
}
}
////////////////////////操作选择
void xuanze()
{
cout<<"input your choose:"<<endl;
cin>>a;
if(a=='A'||a=='D'||a=='I'||a=='Q')
sys(a); //选择相应的操作数执行函数
else
{
cout<<"Error chooseing!"<<endl;
cout<<endl;
display();
}
}
/////////////////////相应操作数对应函数
void sys(char a)
{
switch(a)
{
case 'A':addf();
case 'D':delf();
case 'I':inqf();
case 'Q':exit(0); //退出
}
}
/////////////添加数据的函数
void addf()
{
int k=0,j,g;
for(i=0;i<max;i++)
{
if(stu[i].sex=='\0')k++;
}
cout<<"剩余 "<<k<<" 个记录可以添加!"<<endl; //输出剩余的可添加记录数目
if(k!=0)
{
cout<<"请输入你要添加的记录的个数,但是记录个数不能超过 "<<k<<endl;
cin>>j;
if(j>k)
{
cout<<"Error number!"<<endl;
cout<<endl; //显示美观需要
display();
}
else
{
for(i=0;i<j;i++)
{
for(int h=0;h<max;h++)
{
if(stu[h].sex=='\0') //判断sex是否为'\0' 如果是则执行写入操作
{
cout<<"input the NO"<<i+1<<" 's xuehao:"<<endl;
cin>>stu[h].xuehao;
///判断数据非法与否
for(g=0;g<max;g++)
{
if((stu[g].xuehao==stu[h].xuehao)&&g!=h)
{
cout<<"Duplicate number!"<<endl;
cout<<endl;
display();
}
}/////////判断学号是否相同
if(stu[h].xuehao<1||stu[h].xuehao>10000)
{
cout<<"Error number!"<<endl;
cout<<endl;
display();
}
cout<<"input the NO"<<i+1<<" 's name:"<<endl;
cin>>stu[h].name;
cout<<"input the NO"<<i+1<<" 's sex:('f' for female,'m' for male)"<<endl;
cin>>stu[h].sex;
///判断数据非法与否
if(stu[h].sex!='f'&&stu[h].sex!='m')
{
stu[h].sex='\0'; //恢复sex的初始值,以便下次写入产生遗漏
cout<<"Error sex!"<<endl;
cout<<endl;
display();
}
cout<<"input the NO"<<i+1<<" 's age:(1-100)"<<endl;
cin>>stu[h].age;
///判断数据非法与否
if(stu[h].age<1||stu[h].age>100)
{
stu[h].sex='\0'; //恢复sex的初始值,以便下次写入产生遗漏
cout<<"Error age!"<<endl;
cout<<endl;
display();
}
break; //跳出本层循环
}
}
}
display(); //返回
}
}
else
{
cout<<"No space to add new student!"<<endl;
cout<<endl;
display();
}
}
////////////////删除数据的函数
void delf()
{
int d,s=0;
cout<<"Please input the number of the student you want to delete:"<<endl;
cin>>d;
if(d<1||d>10000)
{
cout<<"Error number!"<<endl;
cout<<endl;
display();
}
else
{
for(i=0;i<max;i++)
{
if(stu[i].xuehao==d)
{
s++; //是否实行删除的标志位
stu[i].xuehao=-1;
stu[i].name[10]='\0';
stu[i].sex='\0';
stu[i].age=0;
cout<<"Delete successfully!"<<endl;
cout<<endl;
display();
}
}
if(s==0)
{
cout<<"Not exist!"<<endl;
cout<<endl;
display();
}
}
}
/////////////查询数据的函数
void inqf()
{
int d,s=0;
cout<<"Please input the number of the student you want to inquiry(0 for all):"<<endl;
cin>>d;
cout<<endl;
if(d==0)
{
for(i=0;i<max;i++)
{
if(stu[i].sex!='\0')
cout<<stu[i].xuehao<<","<<stu[i].name<<","<<stu[i].sex<<","<<stu[i].age<<endl;
}
cout<<endl;
display();
}
else
{
if(d<1||d>10000)
{
cout<<"Error number!"<<endl;
cout<<endl;
display();
}
else
{
for(i=0;i<max;i++)
{
if(stu[i].xuehao==d)
{
s++; //是否存在该数字的标志
cout<<stu[i].xuehao<<","<<stu[i].name<<","<<stu[i].sex<<","<<stu[i].age<<endl;
display();
}
}
if(s==0)
{
cout<<"Not exist!"<<endl;
cout<<endl;
display();
}
}
}
}//ingf
//////////////主函数
void main()
{
init(); //初始化
display(); //屏显(主界面)
}
