#include <stdio.h>
int main(void)
{
    int num = 100;

    printf("dec = %d; octal = %o; hex = %x\n",num,num,num); 
    //%d十进制 %o八进制 %x十六进制
    printf("dec = %d; octal = %#o; hex = %#X\n",num,num,num);
    //井号：输出不同打印形式 有大小写X
    
    return 0;

}