#include<iostream>
#include<windows.h>
using namespace std;
class Student
{
private:
	int num;
	char name[20];
public:
	static int total;//���еľ�̬���ݳ�Ա
	Student() { total++; }//���캯����ÿ����һ���¶�����total��1
	~Student() { total--; }//����������ÿһ�����������ڽ�������total��1
	Student(int n, char *p = "Wang");
	void GetName();
	int Getnum();
};
int Student::total=0;//��̬���ݳ�Ա�ĳ�ʼ��
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
int main()
{
	cout << "The number of all student:" << Student::total << endl;//�޶���ʱ��������������̬��Ա����ʽ����
	Student *p = new Student(13);//��ָ�����붯̬�ռ䲢�õ�����*p
	cout << "The number of all student:" << Student::total << endl;//������������̬��Ա����ʽ����
	cout << "The number of all student:" << p->total << endl;//��ָ����ָ��Ķ������
	delete p;//ͨ��ָ��ɾ����̬��������һ��
	cout << "The number of all student:" << Student::total << endl;
	Student s[2];//������������̬��Ա����ʽ����,�����������󣬹��캯����������
	cout << "The number of all student:" << s[0].total << endl;//������������һ����ͬ
	cout << "The number of all student:" << s[1].total << endl;
	system("pause");
	return 0;
}