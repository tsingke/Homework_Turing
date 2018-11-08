#include<string>
#include<iostream>
using namespace std;
#pragma warning(disable : 4996)

class student
{
private:
	char name[20];
	char sex[5];
	int age;
	char number[10];
	char speciality[10];
public:
	student();
	student(char *na, char *s, int ag, char *nu, char *sp);
	void read(student *p);
	void search(student*p,int x);
	void display(student *p);
};

student::student()
{
	
	name[10] = 0;
}

student::student(char *na, char *s, int ag, char *nu, char *sp)
{
	cout << "Executing constructor.." << endl;
	strcpy(name, na);
	strcpy(sex, s);
	age = ag;
	strcpy(number, nu);
	strcpy(speciality, sp);
}
//构造函数
void student::read(student *p)
{
	cout << "请输入下列信息：" << endl<<"姓名：";
	cin >> name;
	cout << endl << "性别:";
	cin >> sex;
	cout << endl << "年龄：";
	cin >> age;
	cout << endl << "学号:";
	cin >> number;
	cout << endl << "专业:";
	cin >> speciality;


}

int Read(student *p,int x)
{
	int i = 10;
	char c;
	x = 1;
	for (i = 0; i < 10;i++)
	{
		p[i].read(p);
		cout << "还有继续输入吗？" << endl << "Y or N" << endl;
		cin >> c;
		if (c == 'Y')
		{
			i++;
			x++;
		}
		else
			break;

	}
	cout << endl << endl << "————————正在为您读入学生信息——————————" << endl << endl;

	return x;
}
//读入学生信息
void student::search(student *p, int x)
{
	char c[20];
	int i;
	cout << "请输入您想要查询学生的姓名：";
	cin >> c;
	for (i = 0; i < x; i++)
	{
		if (strcmp(p[i].name, c) == 0)
			break;

	}

	cout << "该同学的个人信息如下：" << endl << "姓名：" << p[i].name << endl;
	cout << "性别：" << p[i].sex << endl << "年龄：" << p[i].age << endl << "学号：" << p[i].number << endl << "专业：" << p[i].speciality << endl << endl;

	
	
}

//按姓名查找学生的信息
void student::display(student *p)
{
	cout << "姓名:" << name << endl;
	cout << "性别：" << sex << endl;
	cout << "年龄：" << age << endl;
	cout << "学号：" << number << endl;
	cout<< "专业：" << speciality << endl << endl;


}
void Display(student *p, int y)
{
	int i;
	cout << "————————正在为您加载学生名单————————" << endl;
	
	for (i = 0; i < y; i++)
		p[i].display(p);

}
//浏览学生的信息
int main()
{
	student *stu;
	stu = new student[10];
	int a,count=0;
	
	cout << "————————学生信息管理系统————————" << endl << endl;
	cout << "    1  读取学生信息    " << endl;
	cout << "    2  按姓名查找学生信息    " << endl;
	cout << "    3  浏览学生信息    " << endl;
	cout << "    4  退出系统    " << endl<<endl;
	cout << "请输入你想执行的操作：";
	cin >> a;
	cout << endl << endl;
	while (a != 4)
	{
		switch (a)
		{
		case 1:count=Read(stu,count); break;
		case 2:stu->search(stu,count); break;
		case 3:Display(stu,count); break;
		
		default:cout << "——————执行了错误的操作！——————";
		}
		cout << "现在共有" << count << "名学生，";
		cout << "请输入您选择的操作：";
		cin >> a;
	}
	cout << endl << "——————退出系统——————" << endl;
	system("pause");

	return 0;

}