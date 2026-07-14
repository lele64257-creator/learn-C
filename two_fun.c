
//two_fun.c 一个文件包含两个函数

#include<stdio.h>
void butler(void);//自定义函数原型,告诉编译器我有这一个函数赋值为空，返回值也为空

//定义的函数
void butler(void)//函数名要符合标识符
{
    printf("You rang,Sir?\n");
}

/*
所有C程序都从main函数开始执行，所以定义函数放在main函数前后都可以
但是C的惯例是把main()放在开头，因为它提供了程序的基本框架
*/

int main(void)
{
    printf("I will summon the butler fuction.\n");

    butler();//调用定义函数

    printf("Yes. Bring me some tea and writeable DVDs.\n");
    
    return 0;
}

