#include"Date1.h"
#include<Windows.h>

int main()
{
	Date today, *t;
	today.SetDate(2006, 10, 17);//ͨ��������Բ����ʽ���ʳ�Ա����
	cout << "one day is:";
		today.Display();//������ڵ���Ϣ
		t = &today;
		(*t).SetDate(2007, 12, 18);//*t��ͨ��ָ�������õĶ�����ͨ��Բ����ʳ�Ա����
		cout << "the other day is:";
		(*t).Display();
		system("pause");
		return 0;
}