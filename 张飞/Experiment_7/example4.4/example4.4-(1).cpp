#include"example4.4.h"//����ͷ�ļ�
double Circle::Area()//��Բ�����
{
	Radius*=2;
	return PI*Radius*Radius;
}
double Circle::Circumference()//��Բ���ܳ�
{
	return 2*PI*Radius;
}
double Circle::GetRadius()const//����Ա��������ȡ�뾶ֵ��ʵ�ִ��룬����������
{
	Radius *= 2;
	return Radius;
}
