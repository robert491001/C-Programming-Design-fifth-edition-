/**********************************************
*File name:     six.c
*Description:   C程序设计(第五版)课后编程习题第6题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
//输入一个数，求1到改数的阶乘和。(如1!+………………+20!)
int main(void)
{
    double fun(int n);
    double sum = 0;
    int n;
    printf("please enter a number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += fun(i);
    }
    printf("%d!=%lf\n", n, sum);
    return 0;
}
double fun(int n)
{
    double sum = 1;
    for (int i = 2; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}