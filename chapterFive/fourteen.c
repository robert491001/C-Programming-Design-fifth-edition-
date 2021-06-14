/**********************************************
*File name:     fourteen.c
*Description:   C程序设计(第五版)课后编程习题第14题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include<stdio.h>
#include<math.h>
//函数功能：用牛顿迭代法求方程,2x的立方-4x的平方+3x-6=0 在1.5附近的根。
int main(void)
{
    double x0,x1,f1,f2;
    x1=1.5;
    do
    {
       x0=x1;
       f1=((2*x0-4)*x0+3)*x0-6;
       f2=(6*x0-8)*x0+3;
       x1=x0-f1/f2;
    } while (fabs(x1-x0)>=1e-5);
    printf("方程在1.5附近的根是:%.2f\n",x1);
    return 0;
}