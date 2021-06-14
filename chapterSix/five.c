/********************************************** 
*File name:     five.c
*Description:   C程序设计(第五版)课后编程习题第5题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
#define N 5
//函数功能：将一个数组中的值按逆序重新存放。
int main(void)
{
    int a[N], tem;
    printf("请输入数组输入数据:\n");
    for (int i = 0; i < N; i++)
    {
        printf("a[%d]=", i + 1);
        scanf("%d", &a[i]);
    }
    printf("数组内容为：");
    for (int i = 0; i < N; i++)
    {
        printf("a[%d]=%d ", i + 1, a[i]);
    }
    for (int i = 0; i < N / 2; i++) //以数组中间元素为中心，将其两侧的元素互换。
    {
        tem = a[i];
        a[i] = a[N - i - 1];
        a[N - i - 1] = tem;
    }
    printf("\n现在数组内容为：");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}