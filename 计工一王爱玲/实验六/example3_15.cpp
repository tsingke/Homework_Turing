//Li3_15.cpp�ļ���Date��Ķ������顢ָ���ʹ��ʾ���������ļ�Date4.h
#include "Date4.h"
int main()
{   Date array[3]={ Date(2011,5,1), Date(2011,10,1) };    //�������һά����
    Date *p=array ;      			    //ָ��ָ��������׵�ַ���൱��Date *p=&array[0];
    for( ; p<array+3;  p++)   	     	//��ָ���Ч���������е�Ԫ��
    p->Display( );	                   //���ַ��ʷ�ʽ��Ч
return 0;
}
