#include <stdio.h>
#include <stdlib.h>
//作业1：打印出学生信息
int main()
{
//下面是写数据，将学生信息写入到data.txt文件中
   FILE *fpWrite=fopen("data.txt","w");
      if(fpWrite==NULL)      {
                return 0;
      }
       for(int i=0;i<10;i++)
        printf(fpWrite,"%d ",i);
       fclose(fpWrite);
//下面是读数据，将读到的数据存到数组a[10]中，并且打印到控制台上

  //读取数据
  char a[1024]={0};
  FILE *fpread=fopen("data.txt",r);
   if(fpRead==NULL)
        {
                      return 0;
   }
    for(int i=0;i<6;i++)      {
    scanf(fpRead,"%d ",&a[i]);
    printf("%d ",a[i]);      }
      getchar();//等待

       return 1;
	   

}
