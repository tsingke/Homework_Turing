// example_3_6.cpp��ָ�������ʽ��Ӧ�þ���
#include"Date1.h"
int main()
{   
	Date today,*t;
	today.SetDate(2006,10,17);      			//ͨ��������Բ����ʽ���ʳ�Ա����
	cout<<"One day is:";
	today.Display();               			//������ڵ���Ϣ
	t=&today;
	t->SetDate(2007,12,18);       			    //ͨ��ָ����Բ����ʽ���ʳ�Ա����
	cout<<"the other day is:";
	t->Display();                			    //������ڵ���Ϣ
	return 0;
}
