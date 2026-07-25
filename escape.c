#include<stdio.h>
int main(void)
{
    float salary;

    printf("\a Enter your desired monthly salary:");

    printf(" $_______\b\b\b\b\b\b\b\b");

    scanf("%f",&salary);//salary = 4000.00

    printf("\n\t$%.2f a minth is $%.2f a year.",salary,salary * 12.0);//\t TAB

    printf("\rGee!\n");//\r return 回到起始处

    return 0; 

}