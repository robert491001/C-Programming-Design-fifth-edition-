/**********************************************
*File name:     two.c
*Description:   C程序设计(第五版)课后编程习题第2题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
//函数功能：用选择法对10个数进行排序
int main(void)
{
    int a[10], tem, min;
    printf("请输入10个整数:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d]=", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++) //进行排序
    {
        min = i;                         //m是最小数的小标，最开始假设第一个数(即下标0)是最小的
        for (int j = i + 1; j < 10; j++) //与后面的数依次比较找出比该下标所表示的数还小的数的下标，与之交换
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        //通过下标找到最小的数与之交换。
        tem = a[i];
        a[i] = a[min];
        a[min] = tem;
    }
    printf("用选择法对你输入的10个整数排序后是：");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}