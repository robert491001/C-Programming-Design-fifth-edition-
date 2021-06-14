/**********************************************
*File name:    Three.c
*Description:   C程序设计(第五版)课后编程习题第3题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include<stdio.h>
#include<math.h>
//函数功能：购房从银行贷了一笔款d，准备每月还款额为p，月利率为r，计算多少月能还清。
//公式为：m=log(p/p-d*r)/log(1+r)
int main()
{
    double d=300000,p=6000,r=0.01,m;
    m=log10(p/(p-d*r))/log10(1+r);
    printf("%.1lf",m);
    return 0;
}