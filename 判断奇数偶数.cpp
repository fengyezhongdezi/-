#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
     int i = 0;
     while (i!=1000)
     {
         scanf("%d",&i);
		 if(i>=500)
		 { 
		 printf("������С��500����������1000��������");
		 continue;
		 }
         else if(i%2 == 1)
              printf("����:%d\n",i);
         else
              printf("ż��:%d\n",i);
     }
         
     return 0;
}