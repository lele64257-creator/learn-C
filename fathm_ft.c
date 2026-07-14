//fathm_ft.c 把2音寻fathom转换为英寸feet
#include<stdio.h>
int main(void)
{
    int feet;
    int fathoms;

    fathoms = 2;
    feet = fathoms * 6;

    printf("There is %d feet in %d fathoms!\n",feet,fathoms);//进行了两次替换：两个%d分别对应feet和fathoms中间用逗号隔开
    printf("Yes, I said %d feet!\n",6 * fathoms);//将6 * fathoms的结果输出到%d中

    return 0;
}