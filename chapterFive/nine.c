/**********************************************
*File name:     nine.c
*Description:   C程序设计(第五版)课后编程习题第9题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
//函数功能：求1000以内的所有完数，并按照以下格式输出其因子。6 is factors are 1,2,3
int main(void)
{
    int s = 0;
    for (int i = 6; i < 1000; i++)  //外层循环，控制1~1000
    {
        for (int j = 1; j < i; j++)  //内存循环，求改数的所有因子累加和
        {
            if (i % j == 0)
                s += j;
        }
        if (s == i)             //判断与改数是否相等，相等则是完数，并输出因子。
        {
            printf("%d is factors are %d", i,1);
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                    printf(",%d", j);
            }
            printf("\n");
        }
        s = 0;
    }
    return 0;
}