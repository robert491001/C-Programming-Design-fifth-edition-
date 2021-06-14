/**********************************************
*File name:     five.c
*Description:   C程序设计(第五版)课后编程习题第5题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
//函数功能:求Sn=a+aa+aaa+……+aaa……aa(n个a)之值，其中a是数字，n表示a的位数，n有键盘输入。
int main(void)
{
    int a, n, sum = 0, t = 0;
    printf("please enter two numbers:");
    scanf("%d,%d", &a, &n);
    for (int i = 0; i < n; i++)
    {
        t += a;
        sum += t;
        a *= 10;
    }
    printf("sum=%d\n", sum);
    return 0;
}