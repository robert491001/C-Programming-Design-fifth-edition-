/**********************************************
*File name:     eight.c
*Description:   C程序设计(第五版)课后编程习题第8题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
#define N 4
#define M 5
//函数功能：找出一个二维数组中的鞍点，即该位置上的元素在该行上最大，在该列上最小，也可能没有鞍点。
int main(void)
{
    int a[N][M];
    int i, j, max, b, c, k;
    printf("请输入二维数组:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("a[%d][%d]=", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("你输入是数组是:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    //求鞍点。
    for (i = 0; i < N; i++)
    {
        max = a[i][0]; //先假设a[i][0]最大
        b = 0;         //将列号0赋值给b保存
        for (j = 1; j < M; j++)    //找出i行中最大的数
        {
            if (max < a[i][j])
            {
                max = a[i][j];     //将max重新赋值为i中最大的数
                b = j;             //将最大数的列号重新赋值给b
            } 
            c = 1;                 //先假设是鞍点，用1表示
            for (k = 1; k < N; k++)  
            {
                if (max > a[k][b])        //将这个最大数与其同列元素相比，如果不是同列最小，则不是鞍点，令c=0
                {
                    c = 0;
                    break;
                }
            }
        }
        if (c)
        {
            printf("该数组的鞍点是:a[%d][%d]=%d\n", i, b, max);
            break;
        }
    }
    if (!c)
    {
        printf("该数组没有鞍点\n");
    }
    return 0;
}