//fathm_ft.c 把2音寻转换为英寸
#include<stdio.h>
int main(void)
{
    int feet;
    int fathoms;

    fathoms = 2;
    feet = fathoms * 6;

    printf("There is %d feet in %d fathoms!\n",feet,fathoms);
    printf("Yes, I said %d feet!\n",6 * fathoms);

    return 0;
}