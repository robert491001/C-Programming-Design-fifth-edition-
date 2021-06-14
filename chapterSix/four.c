/********************************************** 
*File name:     four.c
*Description:   C程序设计(第五版)课后编程习题第4题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
//函数功能：有一个已经排序好的数组，输入一个数后，按原来排序的规律将它插入数组中。
int main(void)
{
    int a[11] = {1, 11, 23, 35, 54, 56, 77, 88, 444, 445}, InsertNumber, tem1, tem2; //假设按照升序排序
    printf("已经排序后的数组内容为：");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n请输入要插入的数:");
    scanf("%d", &InsertNumber);
    if (InsertNumber > a[9]) //如果输入的数比数组中所有的数要大，那就直接插到最后
    {
        a[10] = InsertNumber;
    }
    else //反之，将数组内各个数与插入数比较，直到找到合适位置，将插入数放到该位置，后面的数顺序后移。
    {
        for (int i = 0; i < 10; i++)
        {
            if (a[i] > InsertNumber) //假设已经找到合适位置了，将原位置上的数赋给一个临时变量，同时将插入数放入该位置
            {
                tem1 = a[i];
                a[i] = InsertNumber;
                for (int j = i + 1; j < 11; j++) //通过中间变量将后面数据顺序后移。
                {
                    tem2 = a[j];
                    a[j] = tem1;
                    tem1 = tem2;
                }
                break;
            }
        }
    }
    printf("插入数据后数组排序内容是：");
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}