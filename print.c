#include<stdio.h>
int main(void)
{

    unsigned int un = 3000000000;/*int 32位 short 16位*/
    //在unsigned int 0~2147483647 范围内，但不在int-2147483648~2147483647范围内
    
    short end = 200;
    
    long big = 65537;
    
    long long verybig = 12345678908642;

    //sizeof()运算符，计算整数类型大小，单位是字节

    // int 4byte = 32bit
    // short 2byte = 16bit
    // long 4byte = 32bit
    // long long 8byte = 64bit

    printf("int size = %d\n",sizeof(int));

    printf("un = %u and not %d\n",un ,un);

    printf("end = %hd and %d\n",end ,end);//%h表示short 

    printf("big = %ld and not %hd\n",big ,big );//%l表示long

    printf("verybig = %lld and not %ld\n",verybig ,verybig);

    return 0;
}