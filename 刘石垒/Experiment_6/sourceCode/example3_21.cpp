// li3_21.cpp�ļ�������������Ϊ�����ķ���ֵʹ��ʾ��������ͷ�ļ�Date5.h
#include"Date5.h"

Date &Fun(Date &pDate)                 	//����������Ϊ��ͨ����Fun()����ʽ����
{   
	pDate.ModifyDate( 2012, 5 ,1 );    	//�޸����õ�ֵ,Ҳ�����޸Ķ�Ӧʵ�ζ����ֵ
    cout<<"reference pDate:\n";
    pDate.Display( );
    return pDate;
}
/*
Date & Fun(Date  &pDate)     			//��ͨ����Fun()�Ķ��壬�����������βΣ�����������
{   Date qDate;                 		//����ֲ��Զ�����qDate
    qDate.ModifyDate(2011,  10,  20);          
    return qDate;                 		//���÷���qDate������ȫ���и澯
}
*/
int  main()
{   Date DateA(2011),tDate; 
    cout<<"Before right Fun, DataA:\n";
    DateA.Display();
    cout<<"Before right Fun, tDate:\n";
    tDate.Display();
    tDate=Fun(DateA);
	cout<<"After right Fun, DateA:\n";
	DateA.Display( );
	cout<<"After right Fun, tDate:\n";
	tDate.Display( );
    Fun(DateA)=Date(1998,10,5);
    cout<<"After left Fun, DateA:\n";
    DateA.Display();
	cout<<"After left Fun, tDate:\n";
    tDate.Display();
    return 0;
}   
 
