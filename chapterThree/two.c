/**********************************************
*File name:    two.c
*Description:   C程序设计(第五版)课后编程习题第2题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include<stdio.h>
#include<math.h>
#define One_interest 0.015      //1年期定期存款利息
#define Two_interest 0.021      //2年期定期存款利息
#define Three_interest 0.0275   //3年期定期存款利息
#define Five_interest 0.03      //5年期定期存款利息
#define Cureent_interest 0.0035 //活期存款利息(活期存款每一季度结算一次利息)
//计算本息和公式：1年期本息和:P=1000*(1+r); n年期本息和：P=1000*(1+n*r); 
//存n次1年期的本息和：P=1000*(1+r)的n次幂; 活期存款本息和：P=1000*(1+r/4)的4n次幂。注：1000*(1+r/4)是一个季度的本息和
int main()
{
    float principal=1000;
    printf("%-10.2f\n",principal*(1+5*Five_interest));//一次存五年本息和
    printf("%-10.2f\n",(principal*(1+2*Two_interest))*(1+3*Three_interest));//先存2年，到期后将本息再存3年的本息和
    printf("%-10.2f\n",(principal*(1+3*Three_interest))*(1+2*Two_interest));//先存3年，到期后将本息再存2年的本息和
    printf("%-10.2f\n",principal*pow(1+One_interest,5));//存1年期，到期后将本息再存1年期，连续存5年
    printf("%-10.2f",principal*pow(1+Cureent_interest/4,4*5));//存活期存款，活期利息每一季度结算一次。
    return 0;
}