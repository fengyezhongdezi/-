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
		 printf("请输入小于500的数，输入1000结束程序");
		 continue;
		 }
         else if(i%2 == 1)
              printf("奇数:%d\n",i);
         else
              printf("偶数:%d\n",i);
     }
         
     return 0;
}