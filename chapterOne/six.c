/**********************************************
*File name:    six.c
*Description:   C程序设计(第五版)课后编程习题第6题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include<stdio.h>
//函数功能：运行时输入三个数，输出其中值最大者。
int main()
{
    int a,b,c,max;
    printf("Please enter three numbers:");
    scanf("%d,%d,%d",&a,&b,&c);
    max=a>b?a:b;
    printf("The largest of the three is:%d\n",max>c?max:c);
    return 0;
}