#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
class Person
{
private:
	int age;
	char *name;
public:
	Person(int n = 1, char *na = "Zhuli");//���캯��
	~Person();
	void Print();//���غ��������������ͨ����
	void Print() const;//���غ�����������������ﺯ����const��������
	void ModifyAge();//�����޸��������ͨ��Ա����
};
Person::Person(int n, char *na)//���캯���Ķ���
{
	age = n;
	name = new char[strlen(na) + 1];
	strcpy_s(name, na);
}
Person::~Person()//���������Ķ���
{
	delete[]name;
}
void Person::Print()//��ͨ��Ա����Print()�Ķ���
{
	cout << "age:" << age << "name:" << name << endl;
	cout << "This is general Print()." << endl;
}
void Person::Print() const//����Ա����Print()�Ķ��壬const����ʡ��
{
	cout << "age:" << age << "name:" << name << endl;
	cout << "This is const Print()." << endl;
}
void Person::ModifyAge()//�����޸��������ͨ��Ա����
{
	age++;
}
int mian()
{
	const Person p1(17, "wu");//���峣��������ʼ��
	cout << "Output const object p1" << endl;
	p1.Print();//��������õĳ���Ա����
	Person p2(18, "zhang");//������ͨ�Ķ���
	cout << "Output general object p2" << endl;
	p2.ModifyAge();//�����޸����ݳ�Ա����
	p2.Print();//��ͨ������õĳ���Ա����
	system("pause");
	return 0;
}