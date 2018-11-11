#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
	char number[10];  //ѧ��
	char name[10];  //����
	int common_score;  //ƽʱ�ɼ�
	int experiment_score;  //ʵ��ɼ�
	int final_score;  //��ĩ�ɼ�
	float score;  //���ճɼ�
	int paiming;  //����
}Student;

Student* readDataFromFile(int *N)
{
		printf("\n\n- ���ļ���ȡѧ���ĳɼ���Ϣ-\n\n");
		Student *stu;//����һ��Student���͵�ָ��

		FILE *fp=NULL;  //ָ��Ϊ��
		fp=fopen("data.txt","r");//ֻ��

		int count=0;      //������ѧ����Ŀ
		int index=0;

		if(fp!=NULL)
		{
			fscanf(fp,"%d",&count);
			*N=count;
		}
		else
		{
			printf("�޷����ļ�");
			exit(0);
		}
		getchar();
		printf("ѧ������ĿΪ:%d",count);
		getchar();
		//������ѧ������洢�ռ�;
		stu=(Student*)malloc(count*sizeof(Student));

		//��ȡÿ��ѧ������Ϣ
		while((!feof(fp))&&(index<count))
		{
			//�����ļ�
			fscanf(fp,"%s%s %d %d %d\n",(stu[index].number),(stu[index].name),&stu[index].common_score,&stu[index].experiment_score,&stu[index].final_score);
			//���ѧ����Ϣ
			printf("*%s   ƽʱ�ɼ���%d  ʵ��ɼ���%d   ��ĩ�ɼ���%d",(stu[index].number),stu[index].common_score,stu[index].experiment_score,stu[index].final_score);
			printf("\n");
			index++;
		}
			
		fclose(fp);

     	return stu;//�����׵�ַ
}


//�������ѧ�������ճɼ�
void count_score(Student stu[],int N)
{
		printf("\n=�ڶ���: ����ÿ��ѧ���������ɼ�=\n");
		for(int i=0;i<N;i++)
		{
			stu[i].score=0.2*stu[i].common_score+0.2*stu[i].experiment_score+0.6*stu[i].final_score;
			printf("*%s   ��ĩ�ɼ�:%f\n",stu[i].number,stu[i].score);
		}
}
//����ѧ���ɼ��ľ�ֵ�ͷ���
void ave_fangcha(Student stu[], int N)
{
	printf("\n=���岽: �����ֵ�ͷ���=\n");
	
	double Average,s;
	Average=1.0*(stu[0].score+stu[1].score+stu[2].score+stu[3].score+stu[4].score+stu[5].score)/N;
	s=1.0*(pow(stu[0].score-Average,2)+pow(stu[1].score-Average,2)+pow(stu[2].score-Average,2)+pow(stu[3].score-Average,2)+pow(stu[4].score-Average,2)+pow(stu[5].score-Average,2))/N;
	printf("��ֵΪ��%lf  ����Ϊ��%lf",Average,s);
}

//�������ճɼ�����
int  cmpBigtoSmall(const void *a, const void *b)
{

	Student *aa = (Student *)(a);
	Student *bb = (Student *)(b);



	if ((*aa).score < (*bb).score)  return 1;

	else if ((*aa).score > (*bb).score)  return -1;

	else
		return 0;

}
void sort_score(Student stu[], int N)
{
	printf("\n=���������������ճɼ�����=\n");

	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);

}
//���ѧ����Ϣ
void printmassage(Student stu[], int N)
{
		printf("\n=======���Ĳ�: �����ܳɼ����ѧ��������Ϣ=======\n");
		for(int i=0;i<N;i++)
		{
			printf("��%d����Ϣ    %s    �ܳɼ�:%4.2f��\n",i+1,stu[i].number, stu[i].score);
		}
}

main()
{
	printf("       ѧ���ɼ��������ϵͳ        \n");
	printf("******************************\n\n");


	int N=0;

	Student *stu=NULL;

	stu=readDataFromFile(&N);
	count_score(stu,N);
	sort_score(stu,N);
	printmassage(stu,N);
	ave_fangcha(stu,N);

	free(stu);

	printf("\n");
	system("pause");
}
