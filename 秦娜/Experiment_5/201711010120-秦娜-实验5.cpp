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
		student(const student &per);   //�������캯��
	//	~student ();

		char*Getname();
		char*GetID();
		char *Getnumber();
		char*Getspeciality();
		int Getage();

		void Display();   //��ʾѧ����Ϣ
		void Input();    //���ѧ����Ϣ
};

//���캯�����޲�
student::student()
{
	age = 0;
}

//���캯�����в�
student::student(char*na,char*id,char*num,char*spe,int ag)
{
	strcpy(ID,id);
	strcpy(name,na);
	strcpy(number, num);
	strcpy(speciality,spe);
	age=ag;
}

//�������캯��
student::student(const student &per)
{
	strcpy(name,per.name);
	strcpy(number,per.number);
	strcpy(ID,per.ID);
	strcpy(speciality,per.speciality);
	age=per.age;
}


//��������
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


//���ѧ����Ϣ
void student::Display()
{
	cout<<"�� ��: "<<name<<endl;
	cout<<"���֤: "<<ID<<endl;
	cout<<"ѧ ��: "<<number<<endl;
	cout<<"ר ҵ: "<<speciality<<endl;
	cout<<"�� ��: "<<age<<endl;
}


//����ѧ����Ϣ
void student::Input()
{
	cout<<"������������ ";
	cin>>name;
	cout<<endl;

	cout<<"���������֤�� ";
	cin>>ID;
	cout<<endl;

	cout<<"������ѧ�ţ� ";
	cin>>number;
	cout<<endl;

	cout<<"������רҵ�� ";
	cin>>speciality;
	cout<<endl;

	cout<<"���������䣺 ";
	cin>>age;
	cout<<endl;
}



///////////�����Ƕ����Լ����к����Ķ���
///////////�����Ƕ���ľ���Ӧ��






const int N=10;
void menu();
void Outputstu(student *array);
void Inputstu(student *array);
int Searchstu(student *array,char *na);
int count=0;
int main()
{
	student array[N];    //�����������
	int choice;        //����ѡ��
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
					cout<<"���޴���!"<<endl;

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
	cout<<"***********1.¼����Ϣ**********"<<endl;
	cout<<"***********2.��ѯ��Ϣ**********"<<endl;
	cout<<"***********3.�����Ϣ**********"<<endl;
	cout<<"***********0.��    ��**********"<<endl;
}

void Outputstu (student *array)
{
	cout<<"ѧ��������="<<count<<endl;
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
			cout<<"�������룿(Y or N��"<<endl;
			cin>>ch;
		}while (ch=='Y');
	}




		















