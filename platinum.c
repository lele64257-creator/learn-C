#include<stdio.h>//platinum 白金
int main(void)
{
    float weight;//float 小数
    float value;

    printf("Are you eorth your weight in platinum?\n");
    printf("Let's chrck it out.\n");
    printf("Please enter your weight in pounds:");

    scanf_s("%f", &weight);//&地址符 取地址 阻塞等待输入 &weight告诉scanf把输入的值赋值给weight
    
    value = 1700.0 *weight * 14.533;

    printf("You weight in platinum is worth $%.2f.\n", value);//%+.+数字+f 保留小数点后几位
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("Eat more to maintain your value.\n");

    return 0;
}