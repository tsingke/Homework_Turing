#include <stdio.h>
#include <stdlib.h>
//��ҵ1����ӡ��ѧ����Ϣ
int main()
{
//������д���ݣ���ѧ����Ϣд�뵽data.txt�ļ���
   FILE *fpWrite=fopen("data.txt","w");
      if(fpWrite==NULL)      {
                return 0;
      }
       for(int i=0;i<10;i++)
        printf(fpWrite,"%d ",i);
       fclose(fpWrite);
//�����Ƕ����ݣ������������ݴ浽����a[10]�У����Ҵ�ӡ������̨��

  //��ȡ����
  char a[1024]={0};
  FILE *fpread=fopen("data.txt",r);
   if(fpRead==NULL)
        {
                      return 0;
   }
    for(int i=0;i<6;i++)      {
    scanf(fpRead,"%d ",&a[i]);
    printf("%d ",a[i]);      }
      getchar();//�ȴ�

       return 1;
	   

}
