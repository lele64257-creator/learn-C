//输出一个程序，该程序除了main()以外，还要调用两个自定义函数
#include<stdio.h>
void br(void);
void ic(void);

int main(void)

{
    br();
    printf(" , ");
    ic();
    printf("\n");
    ic();
    printf(",");
    printf("\n");
    br();
    
    return 0;
}

void br(void)

{
    printf("Brazill , Russia");
}

void ic(void)

{
    printf("India , China");
}