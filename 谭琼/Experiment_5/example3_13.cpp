#include <iostream>
#include <string>
using namespace std;

class Student
{
	char *specialty;
public:
	Student(char *pSpec = 0);  //���캯������
	~Student();
	void Show();
};

Student::Student(char *pSpec)
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy_s(specialty, 20,pSpec); //strcpy_s�ǰ�ȫ����������Ҫ��specialty���ӳ�������
		cout << "pSpecΪ��"<<endl;
	}
	else 
	{
		specialty = 0;
		cout << "pSpecΪ��" << endl;
	}
	
}

Student::~Student()
{
	cout << "������������" << endl;
	delete[]specialty;  //specialty�ڴ�ռ���new��������䣬��Ҫ��delete�ͷſռ�
}

void Student::Show()
{
	cout << "specialty=" << specialty << endl;
}

int main()
{
	Student zhang("computer");	//������ͨ�Ĺ��캯��
	Student wang(zhang);		//����ϵͳ�ṩ��Ĭ�Ͽ������캯�����˿�������Ϊǳ������
	zhang.Show();
	wang.Show();                //����Debug���ԣ��ó��ڴ�����������ʾ�쳣��
								//��Ϊ�ڴ˺�����������ϵͳ���öԶ���wang����������
								//��������ǳ������wang.specialty��ָ���ֵcomputer�Ѿ�������zhang�����������ͷ��ˣ�
								//��wang�����������Ҳ����ͷŵĶ��󣬷�������

	return 0;
}