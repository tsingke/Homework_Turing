/*ѧ�����ʵ��*/
/////////////////////////////////////
/////////////////////////////////////
#include "definition.cpp"
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char *num, char *spec, int age)
{
	if (na)
	{
		name = new char[strlen(na) + 1];  //����ǳ����
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spec);
	age = age;
}
Student::Student(const Student &per)      //�������캯��
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
}
Student::~Student()                      //��������
{
	if (name)
		delete[]name;
}
char* Student::GetName()                //��ȡ����
{
	return name;
}
char* Student::GetID()                  //��ȡ���֤
{
	return ID;
}
int Student::GetAge()                   //��ȡ����
{
	return age;
}
char* Student::GetSpec()                //��ȡרҵ
{
	return speciality;
}
char* Student::GetNumber()              //��ȡѧ��
{
	return number;
}
void Student::display()                  //���������Ϣ
{
	cout << "������" << name << endl;
	cout << "���֤��" << ID << endl;
	cout << "ѧ�ţ�" << number << endl;
	cout << "רҵ��" << speciality << endl;
	cout << "���䣺" << age << endl << endl;
}
void Student::input()
{
	char na[10];
	cout << "����������";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "�������֤��";
	cin >> ID
		;
	cout << "�������䣺";
	cin >> age;
	cout << "����רҵ��";
	cin >> speciality;
	cout << "����ѧ�ţ�";
	cin >> number;
}