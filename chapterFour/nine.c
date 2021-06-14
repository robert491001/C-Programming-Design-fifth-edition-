/**********************************************
*File name:     nine.c
*Description:   C程序设计(第五版)课后编程习题第9题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
//函数功能：输入一个不多于5位的正整数，求出是几位数，分别输出每一个数字，同时按逆序输出各位数字。
#include<stdio.h>
int main(void)
{
    int number,digits[5]={0},count=0,i=0;  //digits数组内存放各个位数上的数字。
    printf("please enter number(0~99999):");
    scanf("%d",&number);
    while (number>0)
    {
        digits[i++]=number%10;
        number/=10;
        count++;
    }
    printf("%d\n",count);         //输出几位数
    for (int j = count-1; j >=0; j--)
    {
        printf("%d,",digits[j]);     //分别输出每个位上的数
    }
    printf("\n");
    for (i = 0; i<count; i++)
    {
        printf("%d",digits[i]);    //逆序输出各位数字。
    }   
    return 0;
}