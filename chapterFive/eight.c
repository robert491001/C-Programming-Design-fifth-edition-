/**********************************************
*File name:     eight.c
*Description:   C程序设计(第五版)课后编程习题第8题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include<stdio.h>
#include<math.h>
//输出所有的水仙花数。
int main(void)
{
    int ge,shi,bai;
    for(int i=100;i<1000;i++)
    {
        ge=i%10;
        shi=i/10%10;
        bai=i/100;
        if(i==pow(ge,3)+pow(shi,3)+pow(bai,3))
        {
            printf("%d,",i);
        }
    }
    return 0;
}