#include"example3_26_student.h"
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1]; //����ǳ����
		strcpy_s(name, strlen(na) + 1, na);
	}
	strcpy_s(ID, id);
	strcpy_s(number,10, num);
	strcpy_s(speciality,20, spec);
	age = ag; 
}
Student::Student(const Student &per) //�������캯�����ڴ�������ʱû���õ�
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy_s(name, strlen(per.name) + 1, per.name);
	}
	strcpy_s(ID, 19, per.ID);
	strcpy_s(speciality,20,per.speciality);
	age = per.age;
}
Student::~Student()		//��������
{
	if (name)
		delete[]name;
}
char *Student::GetName()	//��ȡ����
{
	return name;
}
char *Student::GetID()		//��ȡ���֤
{
	return ID;
}
int Student::GetAge()		//��ȡ����
{
	return age;
}
char *Student::GetSpec()	//��ȡרҵ
{
	return speciality;
}
char *Student::GetNumber()	//��ȡѧ��
{
	return number;
}
void Student::Display()		//���������Ϣ
{
	cout << "����:"<<name <<endl ;
	cout << "���֤:" << ID << endl;
	cout << "ѧ��:" << number << endl;
	cout << "רҵ:" << speciality<< endl;
	cout << "����:" << age << endl << endl;
}
void Student::Input()		//��������
{
	char na[10];
	cout << "����������";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy_s(name,10, na);
	cout << "�������֤��";
	cin >> ID;
	cout << "�������䣺";
	cin >> age;
	cout << "����רҵ:";
	cin >> speciality;
	cout << "����ѧ�ţ�";
	cin >> number;
}