/**********************************************
*File name:     four.c
*Description:   C程序设计(第五版)课后编程习题第4题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include<stdio.h>
//函数功能：由键盘输入三个数，输出其中最大数。
int main(void)
{
    int a,b,c,max;
    printf("Please enter three numbers:\n");
    scanf("%d,%d,%d",&a,&b,&c);
    max=a>b?a:b;
    printf("max=%d\n",max>c?max:c);
    return 0;
}