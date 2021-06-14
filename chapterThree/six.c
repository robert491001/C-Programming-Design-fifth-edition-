/**********************************************
*File name:    six.c
*Description:   C程序设计(第五版)课后编程习题第6题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include<stdio.h>
//函数功能：将China译成密码，密码规律是：用原来的字母后面第4个字母代替原来的字母。
//并分别用putchar函数和printf函数输出字符。
int main(void)
{
    char c1='C',c2='h',c3='i',c4='n',c5='a';
    c1+=4,c2+=4,c3+=4,c4+=4,c5+=4;
    printf("%c,%c,%c,%c,%c\n",c1,c2,c3,c4,c5);
    putchar(c1);putchar(c2);putchar(c3);putchar(c4);putchar(c5);
    return 0;
}