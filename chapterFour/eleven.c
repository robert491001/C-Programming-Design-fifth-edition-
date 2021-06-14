/**********************************************
*File name:     eleven.c
*Description:   C程序设计(第五版)课后编程习题第11题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
//函数功能：输入四个数，要求按降序输出
int main(void)
{
    int a, b, c, d, tem;
    printf("please enter four number:");
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
    if (a > b)
    {
        tem = a;
        a = b;
        b = tem;
    }
    if (a > c)
    {
        tem = a;
        a = c;
        c = tem;
    }
    if (a > d)
    {
        tem = a;
        a = d;
        d = tem;
    }
    if (b > c)
    {
        tem = b;
        b = c;
        c = tem;
    }
    if (b > d)
    {
        tem = b;
        b = d;
        d = tem;
    }
    if (c > d)
    {
        tem = c;
        c = d;
        d = tem;
    }
    printf("After ordering a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
    return 0;
}