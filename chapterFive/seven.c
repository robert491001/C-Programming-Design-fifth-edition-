/**********************************************
*File name:     seven.c
*Description:   C程序设计(第五版)课后编程习题第7题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
//计算1~100和，1~50的平方和，1~10的倒数和，并将结果相加输出。
int main(void)
{
    double s1(int n);
    double s2(int n);
    double s3(int n);
    double sum = 0;
    printf("sum=%15.6f\n", s1(100) + s2(50) + s3(10));
    return 0;
}
double s1(int n) //计算1~100和
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
double s2(int n) //计算1~50的平方和
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }
    return sum;
}
double s3(int n) //计算1~10的倒数和
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i; //注意，因为1和i都是整型，相除的话是按整数的，不合法题意，不要将1换成1.0变成double类型。
    }
    return sum;
}