/**********************************************
*File name:     eight.c
*Description:   C程序设计(第五版)课后编程习题第8题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
#include <stdlib.h>
#define N 15
//函数功能：15个数由大到小顺序存放在一个数组中，输入一个数，用折半查找法找出该数是数组中第几个元素，
//         如果不在数组中，输出“无此数”
int main(void)
{
    int a[N] = {88, 75, 66, 44, 25, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1}, aim, top = 0, button = N - 1, middle;
    printf("Please enter the number you are looking for:");
    scanf("%d", &aim);
    while (top <= button)
    {
        middle = (top + button) / 2;
        if (aim == a[middle])
        {
            printf("has found %d,its position is %d\n", aim, middle + 1);
            break;
        }
        else if (aim < a[middle])
        {
            top = middle + 1;
        }
        else
        {
            button = middle - 1;
        }
    }
    if (top > button)
    {
        printf("cannot find %d\n", aim);
    }
    return 0;
}