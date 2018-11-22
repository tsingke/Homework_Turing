#include<iostream>
#include<Windows.h>
using namespace std;
class Student
{
private:
	static int total;//˽�еľ�̬���ݳ�Ա
	int num;
	char name[20];
public:
	Student() { total++; }//����������ÿ����һ���¶�����total��1
	~Student(){ total--; }//����������ÿһ�����������Ľ�������total��1
	Student(int n, char *p = "wang");
	void GetName();
	int Getnum();
	static void Print();   //����һ�����еľ�̬��Ա����
};
int Student::total = 0;//��̬���ݳ�Ա�ĳ�ʼ��
Student::Student(int n, char *p)//���ι��캯����ÿ����һ���¶�����total��1
{
	num = n;
	strcpy_s(name, p);
	total++;
}
void Student::GetName()
{
	cout << name << endl;
}
int Student::Getnum()
{
	return num;
}
void Student::Print()//����ù��о�̬��Ա�������˴������ټ�static
{
	cout << "The number of all students:" << total << endl;
}
int main()
{
Student::Print();//�޶���ʱ��������������̬��Ա������������ʽ���total
Student *p = new Student(13);//��ָ�����붯̬�ռ䲢�õ�����*p
Student::Print();//������������̬��Ա������()���total
p->Print();//��ָ����ָ��Ķ���ȥ���ʾ�̬��Ա����������
delete p;//ͨ��ָ��ɾ����̬��������һ��
Student::Print();//������������̬��Ա�������������total
Student s[2];//�����������󣬹��캯����������
Student::Print();//������������һ����ͬ
Student::Print();;
system("pause");
return 0;
}