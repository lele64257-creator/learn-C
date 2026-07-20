#include <stdio.h>
int main(void)
{
    int i = 2147483647;//   int  32位最大20亿 2的32次方
    unsigned int j = 4294967295;
    
    printf("%d %d %d\n",i ,i+1 ,i+2);
    printf("%u %u %u\n",j ,j+1 ,j+2);//超出范围从零开始

    return 0;
}