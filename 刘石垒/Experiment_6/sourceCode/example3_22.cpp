//li3_22.cpp������ͨ����Equal�ж��������Ƿ�ͬ��ͬ��ͬ����������ͷ�ļ�Date5.h
#include"Date5.h"
bool Equal( Date &DateA, Date &DateB)
{   return (  DateA.GetYear( ) == DateB.GetYear( )
             &&DateA.GetMonth( ) == DateB.GetMonth( )
             &&DateA.GetDay( ) == DateB.GetDay( ) );
}
int main()
{   
    Date YourBirthday( 1990,10,17 ); 
    Date MyBirthday( 1990,10,17 );   		//�������ͬʱ��ɶ���ĳ�ʼ��
    if (Equal( YourBirthday,  MyBirthday) )
        cout<<"Birthday is the same!\n";
    else 
        cout<<"Birthday is not the same!\n";
	   return 0;
}
