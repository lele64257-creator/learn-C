#include <stdio.h>
int main (void)
{
    short int num = 100;
    //使用短整型，占用内存比int小，表示范围比int小
    short int num01 = 10;
    //可以简写short
    long int num2 = 10000;
    //使用长整型，占用内存比int大，表示范围比int大
    //可以简写long
    long long int num3 = 1;
    //超长整形
    printf("%d\n",num);
    printf("%d\n",num01);
    printf("%d\n",num2);

    unsigned a = 123;
    //unsigned修饰一个非负的整数 范围0~65436
    //signed 起到强调的作用

    printf("%d\n",a);

    return 0;
}