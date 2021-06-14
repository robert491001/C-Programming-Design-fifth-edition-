/**********************************************
*File name:     six.c
*Description:   C程序设计(第五版)课后编程习题第6题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include<stdio.h>
//函数功能：计算函数 y={x (x<1)
//                    2x-1 (1<=x<10)
//                    3x-11 (x>=10)
int main()
{
    int y,x;
    printf("please enter x:");
    scanf("%d",&x);
    if(x<1)
    {
        y=x;
    }else if (x>=10)
    {
        y=3*x-11;
    }else
    {
        y=2*x-1;
    } 
    printf("y=%d\n",y);
    return 0;
}