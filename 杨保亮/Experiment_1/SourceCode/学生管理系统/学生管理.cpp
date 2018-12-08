#define _CRT_SECURE_NO_WARNINGS
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
	char *name;
	char ID[19];
	char number[10];
	char speciality[20];
	int age;
public:
	Student();
	Student(char *na,char *id,char *num,char *space,int ag);
	Student(const Student &per);
	~Student();
	char* Getname();
	char* GetID();
	char* GetNumber();
	char* Getspec();
	int GetAge();
	void Display();
	void Input();
};
Student::Student()
{
	name=NULL;
	age=0;
}
Student::Student(char *na,char *id,char *num,char *spec,int ag)
{
	if(na)
	{
		name=new char[strlen(na)+1];
		strcpy(name,na);
	}
	strcpy(ID, id);
	strcpy(number,num);
	strcpy(speciality,spec);
	age=ag;
}
Student::Student(const Student &per)
{
	if(per.name)
	{
		name=new char[strlen(per.name)+1];
		strcpy(name,per.name);
	}
	strcpy(ID,per.ID);
	strcpy(number,per.number);
	strcpy(speciality,per.speciality);
	age=per.age;
}
Student::~Student()
{
	if(name)
		delete []name;
}
char* Student::Getname()
{
	return name;
}
char* Student::GetID()
{
	return ID;
}
int Student::GetAge()
{
	return age;
}
char* Student::Getspec()
{
	return speciality;
}
char* Student::GetNumber()
{
	return number;
}
void Student::Display()
{
	cout<<"姓名："<<name<<endl;
	cout<<"身份证："<<ID;
	cout<<"学号："<<number<<endl;
	cout<<"专业："<<speciality<<endl;
	cout<<"年龄："<<age<<endl<<endl;
}
void Student::Input()
{
	char na[10];
	cout<<"输入姓名：";
	cin>>na;
	if(name)
		delete []name;
	name=new char[ strlen(na)+1];
	strcpy(name,na);
	cout<<"输入身份证：";
	cin>>ID;
	cout<<"输入年龄：";
	cin>>age;
	cout<<"输入专业：";
	cin>>speciality;
	cout<<"输入学号：";
	cin>>number;
}
//第三个文件
const int N=10;
int a=0;
void menu();
void Outputstu( Student *array);
void OutputStu(Student *array)
{
	cout<<"学生人数="<<a<<endl;
	for(int i=0;i<a;i++)
		array[i].Display();
}

void InputStu(Student *array);
int SearchStu(Student *array,char *na);

int main()
{
	Student array[N];
	int choice;
	do
	{
		menu();
		cout<<"Please input your choice:";
		cin>>choice;
		if(choice>=0&&choice<=3)
			switch(choice)
		{
			case 1:InputStu(array);break;
			case 2:cout<<"Input the name searched"<<endl;
				char na[20];
				cin>>na;
				int i;
				i=SearchStu(array,na);
				if(i==N)
					cout<<"查无此人！\n";
				else
					array[i].Display();
				break;
			case 3:OutputStu(array);break;
			default:break;
		}
	}while(choice);
	return 0;
}
void menu()
{
	cout<<"********1.录入信息********"<<endl;
	cout<<"********2.查询记录********"<<endl;
	cout<<"********3.浏览信息********"<<endl;
	cout<<"********0.退    出********"<<endl;
}

int SearchStu(Student *array, char *na)
{
	int i,j=N;
	for(i=0;i<a;i++)
		if(strcmp(array[i].Getname(),na)==0)
			j=i;
	return j;
}
void InputStu(Student *array)
{
	char ch;
	do
	{
		array[a].Input();
		a++;
		cout<<"继续输入吗？(Y or N)"<<endl;
		cin>>ch;
	}while(ch=='Y');
}




