/**********************************************
*File name:     three.c
*Description:   C程序设计(第五版)课后编程习题第3题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include<stdio.h>
//函数功能：输入两个正整数，求取最大公约数和最小公倍数。
int main(void)
{
    int m,n,a,b,tem,r;
    printf("please enter m,n:");
    scanf("%d,%d",&m,&n);
    r=m*n; 
    if(m<n)       //为后续使用辗转相除法排除数据错误
    {
        tem=m;
        m=n;
        n=tem;
    }
    tem=m%n;
    while (tem!=0)    //辗转相除法求去最大公约数
    {
        m=n;
        n=tem;
        tem=m%n;
    }
    printf("%d\n",n);   //最大公约数。
    printf("%d\n",r/n); //用m,n的乘积除以最大公约数得到最小公倍数。
    return 0;
}