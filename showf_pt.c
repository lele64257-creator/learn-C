#include<stdio.h>
int main(void)
{
    float aboat = 32000.0f;//float单精度
    //32000.0储存的是double，可能有精度丢失

    double abet = 2.14e9;

    long double dip = 5.32e-5L;//long double是C99标准

    printf("%f can be written %e\n",aboat ,aboat);
    printf("%f can be written %e\n",abet ,abet);
    printf("%Lf can be written %Le\n",dip ,dip);

    return 0;
}