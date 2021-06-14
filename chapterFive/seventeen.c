/**********************************************
*File name:     seventeen.c
*Description:   C程序设计(第五版)课后编程习题第17题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
int main(void)
{
    char i, j, k;
    for (i = 'x'; i <= 'z'; i++)
    {
        for (j = 'x'; j <= 'z'; j++)
        {
            if (i != j)
            {
                for (k = 'x'; k <= 'z'; k++)
                {
                    if (i != k && j != k)
                    {
                        if (i != 'x' && k != 'x' && k != 'z')
                        {
                            printf("A-%c\nB-%c\nC-%c\n", i, j, k);
                        }
                    }
                }
            }
        }
    }
    return 0;
}