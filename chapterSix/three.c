/**********************************************
*File name:     three.c
*Description:   C程序设计(第五版)课后编程习题第3题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
//函数功能：求对角线之后
int main(void)
{
    int a[3][3],sum=0;
    printf("请给3*3的二维数组输入数据：\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("a[%d][%d]=", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        sum+=a[i][i];
    }
    printf("对角线元素之和是%d\n",sum);
    return 0;
}