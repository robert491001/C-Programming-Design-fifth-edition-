/********************************************** 
*File name:     six.c
*Description:   C程序设计(第五版)课后编程习题第6题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
#define N 10
//函数功能：打印杨辉三角(不少于10行)
int main(void)
{
    int i, j, a[N][N] = {0};
    for (i = 0; i < N; i++) //对首位元素进行赋值(即第一个1和最后一个1)，在同一行中，每行两端都是1
    {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for (i = 2; i < N; i++)
    {
        for (j = 1; j < i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j]; //相邻两行中，除1以外的每一个数等于它“肩上”两个数的和
        }
    }
    for (i = 0; i < N; i++) //输出
    {
        for (j = 0; j <= i; j++)
        {
            printf("%6d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}