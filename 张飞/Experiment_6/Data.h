#include<iostream>
#include<Windows.h>
using namespace std;
class Date
{
private:
	int year;//private����ʡ�ԣ�ΪĬ������
	int month;//���ݳ�Ա
	int day;
public:
	void SetDate(int, int, int);//����ʾ���ݳ�Ա��ʼ���Ĺ��г�Ա����
	void Display();//ִ����ʾ���ܵĹ��г�Ա����
	int GetYear();//���г�Ա��������ȡyear����ֵ
	int GetMonth();//���г�Ա��������ȡMonth����ֵ
	int GetDay();//���г�Ա��������ȡday����ֵ
};//�˷ֺŲ����٣���ʾ�������