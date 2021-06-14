/**********************************************
*File name:     five.c
*Description:   C程序设计(第五版)课后编程习题第5题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include<stdio.h>
#include<math.h>
//函数功能：从键盘输入一个小于1000的整数，并输入其平方根(若平方根不是整数，则输出其整数部分),同时
//对输入数据进行检查，如果不是小于1000，要求重新输入。
int main()
{
    int number,Square;
    printf("Please enter a positive number less than 1000:");
    scanf("%d",&number);
    while(number>1000)
    {
        printf("The data is not valid. Please re-enter it:");
        scanf("%d",&number);
    }
    Square=sqrt(number);
    printf("%d The square root integral part %d\n",number,Square);
    return 0;
}