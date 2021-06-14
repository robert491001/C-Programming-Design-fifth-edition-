/**********************************************
*File name:     four.c
*Description:   C程序设计(第五版)课后编程习题第4题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
//函数功能：输入一行字符，分别统计英文字母、空格、数字和其他字符的个数。
int main(void)
{
    int word = 0, sapce = 0, number = 0, another = 0;
    char c;
    printf("please enter a string of characters:");
    while ((c = getchar()) != '\n')
    {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            word++;
        }
        else if (c >= '0' && c <= '9')
        {
            number++;
        }
        else if (c == ' ')
        {
            sapce++;
        }
        else
        {
            another++;
        }
    }
    printf("word=%d,sapce=%d,number=%d,another=%d\n", word, sapce, number, another);
    return 0;
}