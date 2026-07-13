#include <stdio.h>
int main(void) //main function
{
    int number;  /*这是一个多行注释
                int 是一个声明
                num 是一个变量
                */
    number=1;  //这也是注释 给num赋值为1
    float price = 2.5;//float单精度小数
    double pai = 3.1415;// 双精度小数
    char grade = 'A';//字符变量

    printf("I'm a novice.\n");//print function \+n是换行
    printf("This is my first C programme.\n");
    printf("this is a number %d.\n",number);//%d对应int类型
    printf("价格:%.2f\n",price); // .2保留两位小数 %f 对应 float/double
    printf("圆周率:%f\n",pai);
    printf("成绩:%c\n",grade);/*%c 对应char*/
    printf("int 占用 %zu 字节\n",sizeof(int));

    return 0;
}