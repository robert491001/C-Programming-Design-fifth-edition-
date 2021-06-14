/**********************************************
*File name:     ten.c
*Description:   C程序设计(第五版)课后编程习题第10题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include<stdio.h>
//函数功能：求以下序列的前20项和：2/1,3/2,5/3,8/5,13/8,21/13,…………
int main(void)
{
    double s=0,a=2,b=1,t;
    for(int i=1;i<=20;i++)
    {
        s+=a/b;
        t=a+b;
        b=a;
        a=t;
    }
    printf("%f\n",s);
    return 0;
}