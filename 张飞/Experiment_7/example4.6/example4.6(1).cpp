#include"example4.6.h"
int Student::count = 0;//��̬���ݳ�Ա�ĳ�ʼ��
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spec);
	age = ag;
	count++;
}
Student::Student(const Student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy(ID, per.ID);
	strcpy(number, per.number);
	strcpy(speciality, per.speciality);
	age = per.age;
	count++;
}
Student::~Student()
{
	cout << "disCon" << endl;
	if (name)
		delete[]name;
	count--;
}

char* Student::GetName()const
{
	return name;
}
char* Student::GetID()
{
	return ID;
}
int Student::GetAge()const
{
	return age;
}
char* Student::GetSpec()
{
	return speciality;
}
char*Student::GetNumber()
{
	return number;
}
void Student::Display()const
{
	cout << "������" << name << endl;
	cout << "���֤��" << ID << endl;
	cout << "ѧ�ţ�" << number << endl;
	cout << "רҵ��" << speciality<< endl;
	cout << "���䣺" << age<< endl;
}
void Student::Input()
{
	char na[10];
	cout << "����������";
	cin >> na;;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "�������֤��";
	cin >> ID;
	cout << "�������䣺";
	cin >> age;
	cout << "����רҵ��";
	cin >> speciality;
	cout << "����ѧ�ţ�";
	cin >> number;
	count++;//�˾����ӣ�ÿ����һ����ѧ��������1
}
void Student::Insert()//����
{
	if (!age)//�������age��ԱֵΪ0ʱ���ڴ˵���Insert()����������������ֵ
		Input();
}
void Student::Delete()//����
{
	age = 0;//ֻ�򵥵Ľ�age��0�����ƶ�����Ԫ��
	count--;
}
int Student::GetCount()//������̬��Ա������ר���������ʾ�̬���ݳ�Ա
{
	return count;
}
