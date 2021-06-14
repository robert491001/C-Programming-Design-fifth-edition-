/**********************************************
*File name:     eight.c
*Description:   C程序设计(第五版)课后编程习题第8题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
//函数功能：一百分制，90分以上为'A',80~89分为'B'，70~9分为'C'，60~69分为'D',60分一下为'E'，输出等级。
int main(void)
{
    float score;
    char grade;
    printf("please enter score(0~100):");
    scanf("%f", &score);
    switch ((int)(score / 10))
    {
    case 10:
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    default:
        grade = 'E';
        break;
    }
    printf("%g=%c\n", score, grade);
    return 0;
}