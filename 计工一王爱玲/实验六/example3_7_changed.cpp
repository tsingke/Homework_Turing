//li3_7.cpp���޸ĺ�ĳ���
#include<iostream>
using namespace std;
class Date
{public:
    int year, month;
protected:
    int day;
                 		// DateB�޷����ó�Ա����GetDay( )
public:
	int GetDay( )                    	//����1���˺���������Ӧ����Ϊpublic����Ϊ
    {   return day ;                 	//protected����ʹ�� main( )�����еĶ���DateA��
    }              
    void Init(int y,  int m,  int d)         	//�����ݳ�Ա��ʼ��
    {   year = y;
        month = m;
        day=d;
    }
   int GetYear( )                  	//����2��GetYear( )������Ҫ����year��ֵ��������
    {   return year ;                 	//������������Ӧ����Ϊint��
    }
   void SetYear( int y)                	//����3��SetYear()����Ŀ�����ڸ����б���year��ֵ��
    {   year = y ;                    	//���践���κ�ֵ����˷���ֵ����Ӧ��Ϊvoid����
    }
}DateA, DateB;                          //�������ͬʱ���������������DateA��DateB
int main( )
{   DateA.Init( 2011, 7, 23 );           	 //ͨ�����к����ĵ�����ɶ���ĳ�ʼ��
    DateB.SetYear( 2012 );
    cout<<"DateA.year="<<DateA.GetYear( )<<endl;   	//28��
    cout<<"DateA.day="<<DateA.GetDay( )  <<endl ;  	//����4��dayΪ����DateA�ı������ݳ�Ա������
                                		    // main()������ֱ�ӷ��ʣ�Ӧ��ΪDateB.GetDay( )
    cout<<"DateA.year="<<DateA.year<<endl;   //yearΪ�������ݳ�Ա�����Կ���ֱ�ӷ���
    cout<<"DateB.year="<<DateB.year<<endl;
    cout<<"DateB.year="<<DateB.GetYear( )<<endl ;   	//33��
    return 0;
}
