# include <iostream>
# include <string>
using namespace std;
//# define size 2

class student 
{
	char name[20];
	char ID[19];
	char number[10];
	char speciality[20];
	int age;
	
	public:
		student();
		student(char*na, char*id, char*num, char*spe, int ag);
		student(const student &per);   //拷贝构造函数
	//	~student ();

		char*Getname();
		char*GetID();
		char *Getnumber();
		char*Getspeciality();
		int Getage();

		void Display();   //显示学生信息
		void Input();    //输出学生信息
};

//构造函数，无参
student::student()
{
	age = 0;
}

//构造函数，有参
student::student(char*na,char*id,char*num,char*spe,int ag)
{
	strcpy(ID,id);
	strcpy(name,na);
	strcpy(number, num);
	strcpy(speciality,spe);
	age=ag;
}

//拷贝构造函数
student::student(const student &per)
{
	strcpy(name,per.name);
	strcpy(number,per.number);
	strcpy(ID,per.ID);
	strcpy(speciality,per.speciality);
	age=per.age;
}


//析构函数
//student::~student()
//{


char*student::Getname()
{
	return name;
}

char*student::GetID()
{
	return ID;
}

char*student::Getnumber()
{
	return number;
}

char*student::Getspeciality()
{
	return speciality;
}

int student::Getage()
{
	return age;
}


//输出学生信息
void student::Display()
{
	cout<<"姓 名: "<<name<<endl;
	cout<<"身份证: "<<ID<<endl;
	cout<<"学 号: "<<number<<endl;
	cout<<"专 业: "<<speciality<<endl;
	cout<<"年 龄: "<<age<<endl;
}


//输入学生信息
void student::Input()
{
	cout<<"请输入姓名： ";
	cin>>name;
	cout<<endl;

	cout<<"请输入身份证： ";
	cin>>ID;
	cout<<endl;

	cout<<"请输入学号： ";
	cin>>number;
	cout<<endl;

	cout<<"请输入专业： ";
	cin>>speciality;
	cout<<endl;

	cout<<"请输入年龄： ";
	cin>>age;
	cout<<endl;
}



///////////以上是对类以及类中函数的定义
///////////以下是对类的具体应用






const int N=10;
void menu();
void Outputstu(student *array);
void Inputstu(student *array);
int Searchstu(student *array,char *na);
int count=0;
int main()
{
	student array[N];    //定义对象数组
	int choice;        //读入选想
	do{
		menu();
		cout<<"Please input your choice:";
		cin>>choice;
		cout<<endl;
		if(choice>=0 && choice<=3)
		
			switch(choice)
			{
			case 1:Inputstu(array);
				break;
			case 2:cout<<"Input the name searched"<<endl;
				char na[20];
				cin>>na;
				int i;
				i=Searchstu(array,na);
				if(i==N)
					cout<<"查无此人!"<<endl;

				else
					array[i].Display();
				break;
			case 3:Outputstu(array);
				break;
			default:break;
		}
	}while(choice);

	return 0;
}


void menu()
{
	cout<<"***********1.录入信息**********"<<endl;
	cout<<"***********2.查询信息**********"<<endl;
	cout<<"***********3.浏览信息**********"<<endl;
	cout<<"***********0.退    出**********"<<endl;
}

void Outputstu (student *array)
{
	cout<<"学生总人数="<<count<<endl;
	int i=0;
	for(i=0;i<count;i++)
	{
		array[i].Display();
	}
}

	int Searchstu(student *array,char *na)
	{
		int i,j=N;
		for(i=0;i<count;i++)
			if(strcmp(array[i].Getname(),na)==0)
				j=i;
			return j;
	}

	void Inputstu(student *array)
	{
		char ch;
		do
		{
			array[count].Input();
			count++;
			cout<<"继续输入？(Y or N）"<<endl;
			cin>>ch;
		}while (ch=='Y');
	}




		















