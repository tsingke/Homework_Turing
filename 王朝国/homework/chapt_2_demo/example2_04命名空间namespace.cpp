//example2_01.cpp�����ֿռ�ʹ��ʾ��
#include <iostream>  
using namespace std;    		//using����ʹ��һ�����������ֿռ�std��C++���ṩ������
    						//�ռ�std���������б�׼C++�Ķ��������
namespace one          		//����һ�����ֿռ�one��������1������M��1������inf
{   const int M=200;
    int inf=10;
}                   		//����δ�ӷֺ�
namespace two         		//����һ�����ֿռ�two��������2��������x��inf
{   int x;
    int inf=-100 ; 
}                   		//����δ�ӷֺ�
using namespace one ;   		//����1��using����ʹ��һ�����������ֿռ�one
int  main()
{   using two::x ;       		//����3��using������ʹ�����ֿռ�two�е�����x
    x=-100 ;            		//ֱ�ӷ��ʣ��൱��two::x=-100;
    cout<<inf<<endl;    		//using����ʹ��������one�������г�Աֱ�ӷ���
    cout<<M<<endl;  
    two::inf*=2;         		//����2��ʹ�����ֿռ���::�ֲ�����������δʹ��using����������
    cout<<two::inf<<endl; 	//ͬ����two�е����ݣ����Ƿ��ʷ�ʽ��һ��
    cout<<x<<endl ;      	//����using������two������x������ֱ�ӷ���
    return  0;
}
