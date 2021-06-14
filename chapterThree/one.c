/**********************************************
*File name:    one.c
*Description:   C程序设计(第五版)课后编程习题第1题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include<stdio.h>
#include<math.h>
//函数功能：计算10年后我国国民生产总值与现在相比增长多少百分比。
//计算公式:P=(1+r)的n次幂，r为年增率，n为年数，p为与现在相比的倍数。
int main()
{
    printf("%f",pow(1+0.07,10));
    return 0;
}