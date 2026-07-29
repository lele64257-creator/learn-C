#include<stdio.h>
#include<float.h>
#include<limits.h>
int main(void)
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest doubl: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n",FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);

    return 0;
}
/*
limits.h中的明示变量
CHAR_BIT/MAX/MIN char类型位数，最大值最小值
SCHAR_    unsighed char类型
SHRT_    short类型
USHRT_   unsighed short类型
INT_     int类型
UNIT_    unsighed int类型
LONG_    long类型
ULONG_   unsighed long类型
LLONG_   long long类型
ULLONG_MAX unsighed long long类型
WARNING！！！只有CHAR_有+BIT，ULLONG只有MAX
*/

/*
float.h中包含
FLT_MANT_DIG    float类型尾数位数
FLT_DIG         float类型最少有效数字（十进制）
DLT_MIN_10_EXF  带全部有效数字的float类型最小负数（以10为底）
FLT_MAX_10_EXF  float类型最大指数（以10为底）
FLT_MIN         保留全部精度的float最小正整数
FLT_MAX         float类型最大正数
FLT_EPSILON     1.00和比1.00大的最小float类型值之间的差值
*/