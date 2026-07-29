/*
printf()函数    %a/A    浮点数、十六进制数和p记数法
                %c      单个字符
                %d      有符号十进制整数
                %e/E    浮点数，e记数法
                %f      浮点数，十进制记数法
                %g/G    根据值的不同，自动选择%f或%e，%e格式用于指数小于-4或大于或等于精度时
                %i      有符号十进制整数（与%d相同）    
                %o      无符号八进制整数
                %p      指针
                %s      字符串
                %u      无符号十进制整数
                %x/X    无符号十六进制整数，使用十六进制0f/0F
                %%      打印一个百分号
*/
#include<stdio.h>
#define PI 3.141593
int main(void)
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f berry pies.\n", number, pies);
    printf("The value of pi is %f.\n", PI);
    printf("farewell! thou art too dear for my possessing.\n");
    printf("%c%d\n", '$', 2 * cost);

    return 0;
}