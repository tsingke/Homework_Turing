// li3_18.cpp�ļ���������Ϊֵ��ʽ�����ĵ���ֵ���ݷ���������ͷ�ļ�Date5.h
#include"Date5.h"
void Fun(Date DateVar)           	     //��ͨ����Fun()�Ķ��壬����Ϊֵ��ʽ����
{   DateVar.ModifyDate( 2011, 11, 1 );     	//�޸��βζ����ֵ
    DateVar. Display ( );    
}
int  main()
{   Date DateA;          
    DateA. Display ( );
    Fun(DateA);                 		//ʵ�ζ�����ֵ���βζ��󣬵��ÿ������캯��
    cout<<"after calling fun() DateA:";
	DateA. Display ( );
	return 0;
}     
