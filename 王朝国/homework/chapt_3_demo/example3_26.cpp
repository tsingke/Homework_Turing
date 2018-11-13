//example3_26.cpp�ļ�������������������һЩ��ͨ����
#include<iostream>
#include "example3_26_student.h"
using namespace std;
const int N=10;

void menu();
void OutputStu( Student *array );
void InputStu(Student *array);
int SearchStu( Student *array, char *na);

int count=0;

int main()
{
	Student array[N];
	int choice;
	
	do
	{
		menu();
		cout<<"Please input your choice:";
		cin>>choice;
		if( choice>=0 && choice <= 3 )         
			switch(choice)
		{
			case 1:InputStu(array);break;
			case 2:cout<<"Input the name searched"<<endl;
			       char na[20];
				   cin>>na;
				   int i;
					   i=SearchStu(array, na);
				   if (i==N)
					   cout<<"���޴��ˣ�\n";
				   else
					   array[i].Display();
				   break;
			case 3:OutputStu(array); break;
			default:break;
		}
	}while(choice);
	return 0;
}
				   

void menu()
{
	cout<<"**********1.¼����Ϣ**********"<<endl;
	cout<<"**********2.��ѯ��Ϣ**********"<<endl;
	cout<<"**********3.�����Ϣ**********"<<endl;
	cout<<"**********0.��    ��**********"<<endl;
}

void OutputStu( Student *array)               //�����������Ԫ��
{
	cout<<"ѧ��������="<<count<<endl;
	for(int i=0 ; i<count ; i++)
		array[i].Display();
}

int SearchStu( Student *array, char *na )         //��������ѯ
{
	int i,j=N;
	for(i=0 ; i<count ; i++)
		if( strcmp( array[i].GetName() , na) == 0 )
			j=i;
	return j;
}

void InputStu(Student *array )                //�����������Ԫ��
{
	char ch;
	do
	{   
		array[count].Input();
		count++;
		cout<<"����������(Y or N )"<<endl;
		cin>>ch;
	}while(ch=='Y');
}
