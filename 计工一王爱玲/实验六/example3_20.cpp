// li3_20.cpp�ļ�������ָ����Ϊ��ʽ�����ĵ��򴫵�ַ����������ͷ�ļ�Date5.h
#include"Date5.h"
void Fun(Date &pDate)                 	    //����ָ����Ϊ��ͨ����Fun()����ʽ����
{   pDate.ModifyDate(2011, 11, 1);            	//�޸�ָ����ָ��Ķ����ֵ
    pDate.Display( );
}
int  main()
{   
	Date DateA(2010);     
    DateA.Display( ); 	//��������ֵ
    Fun (DateA) ;                       	//ʵ�ζ����ַ���򴫸��βζ���ָ��
    cout<<"after calling fun() DateA: ";
    DateA.Display( );             	         //ʵ�ζ����ֵ�Ѹı�
    return 0;
}                    
