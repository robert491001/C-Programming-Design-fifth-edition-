/**********************************************
*File name:     sixteen.c
*Description:   C程序设计(第五版)课后编程习题第16题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
//函数功能打印了菱形
/***********
   *
  ***
 *****
*******
 *****
  ***
   *
***********/
int main(void)
{
    int i, j, k;
    for (i = 0; i < 4; i++)        //控制打印行数
    {
        for (j = 0; j <= 2 - i; j++)  //控制打印空格数
        {
            printf(" ");
        }
        for (k = 0; k <= 2 * i; k++) //控制打印*号
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)    //控制打印剩余行数
    {
        for (j = 0; j <= i; j++) //控制打印空格数
        {
            printf(" ");
        }
        for (k = 0; k <= 4 - 2 * i; k++) //控制打印*号
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}