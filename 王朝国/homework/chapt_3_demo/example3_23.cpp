//li3_23.cpp������Ԫ����Equal()�ж��������Ƿ�ͬ��ͬ��ͬ����������ͷ�ļ�Date6.h
#include"Date6.h"
int main()
{   Date YourBirthday(1990 , 10 , 17); 
    Date MyBirthday(1990 , 10 , 17);   		//�������ͬʱ��ɶ���ĳ�ʼ��
    if ( Equal(YourBirthday , MyBirthday) )
        cout<<"Birthday is the same!\n";
    else 
        cout<<"Birthday is not the same!\n";
	   return 0;
}
