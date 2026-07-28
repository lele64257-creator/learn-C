#include<stdio.h>
int main(void)
{
   int age;
   
   printf("How old are you\n");
   scanf("%d",&age);
   printf("You have been born in this world for %d seconds",age * 3.1536e7);
   
   return 0;
}