#include<iostream>
using namespace std;
class Date
{
public:
	int year, month;
protected:
	int day;
	int GetDay();//����1���˺���������Ӧ����Ϊpubllc,��Ϊprotected����ʹ��main()�����еĶ���DateA��DateB�޷����ó�Ա����GetDay()
	{
		return day;
	}
public:
	void Init(int y, int m, int d)//�����ݳ�Ա��ʼ��
	{
		year = y;
		month = m;
		day = d;
	}
	void GetYear()//����2��GetYear()������Ҫ����year��ֵ�������亯����������Ӧ����Ϊint��
	{
		return year;
	}
	int SetYear(int y)//����3��SetYear()����Ŀ�����ڸ����б���year��ֵ�����践���κ�ֵ����˷���ֵ����Ӧ��Ϊvoid��
	{
		year = y;
	}
}DateA,DateB;
int main()
{
	DateA.Init(2011, 7, 23);
	DateB.SetYear(2012);
	cout << "DateA.year=" << DateA.GetYear() << endl;//34��
	cout << "DateA.day=" << DateB.day << endl;//����4��dayΪ����DateA�ı������ݳ�Ա��������main()������ֱ�ӷ��ʣ�Ӧ��ΪDateB.GetDay()
	cout << "DateA.year=" << DateA.year << endl;//yearΪ�������ݳ�Ա�����Կ���ֱ�ӷ���
	cout << "DateB.year=" << DateB.year << endl;
	cout << "DateB.year=" << DateB.year.GetYear()endl;//39��
	return 0;
}