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
//���캯��
void student::read(student *p)
{
	cout << "������������Ϣ��" << endl<<"������";
	cin >> name;
	cout << endl << "�Ա�:";
	cin >> sex;
	cout << endl << "���䣺";
	cin >> age;
	cout << endl << "ѧ��:";
	cin >> number;
	cout << endl << "רҵ:";
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
		cout << "���м���������" << endl << "Y or N" << endl;
		cin >> c;
		if (c == 'Y')
		{
			i++;
			x++;
		}
		else
			break;

	}
	cout << endl << endl << "��������������������Ϊ������ѧ����Ϣ��������������������" << endl << endl;

	return x;
}
//����ѧ����Ϣ
void student::search(student *p, int x)
{
	char c[20];
	int i;
	cout << "����������Ҫ��ѯѧ����������";
	cin >> c;
	for (i = 0; i < x; i++)
	{
		if (strcmp(p[i].name, c) == 0)
			break;

	}

	cout << "��ͬѧ�ĸ�����Ϣ���£�" << endl << "������" << p[i].name << endl;
	cout << "�Ա�" << p[i].sex << endl << "���䣺" << p[i].age << endl << "ѧ�ţ�" << p[i].number << endl << "רҵ��" << p[i].speciality << endl << endl;

	
	
}

//����������ѧ������Ϣ
void student::display(student *p)
{
	cout << "����:" << name << endl;
	cout << "�Ա�" << sex << endl;
	cout << "���䣺" << age << endl;
	cout << "ѧ�ţ�" << number << endl;
	cout<< "רҵ��" << speciality << endl << endl;


}
void Display(student *p, int y)
{
	int i;
	cout << "��������������������Ϊ������ѧ����������������������" << endl;
	
	for (i = 0; i < y; i++)
		p[i].display(p);

}
//���ѧ������Ϣ
int main()
{
	student *stu;
	stu = new student[10];
	int a,count=0;
	
	cout << "����������������ѧ����Ϣ����ϵͳ����������������" << endl << endl;
	cout << "    1  ��ȡѧ����Ϣ    " << endl;
	cout << "    2  ����������ѧ����Ϣ    " << endl;
	cout << "    3  ���ѧ����Ϣ    " << endl;
	cout << "    4  �˳�ϵͳ    " << endl<<endl;
	cout << "����������ִ�еĲ�����";
	cin >> a;
	cout << endl << endl;
	while (a != 4)
	{
		switch (a)
		{
		case 1:count=Read(stu,count); break;
		case 2:stu->search(stu,count); break;
		case 3:Display(stu,count); break;
		
		default:cout << "������������ִ���˴���Ĳ�����������������";
		}
		cout << "���ڹ���" << count << "��ѧ����";
		cout << "��������ѡ��Ĳ�����";
		cin >> a;
	}
	cout << endl << "�������������˳�ϵͳ������������" << endl;
	system("pause");

	return 0;

}