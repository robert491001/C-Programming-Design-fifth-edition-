/**********************************************
*File name:     twelve.c
*Description:   C程序设计(第五版)课后编程习题第12题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
//函数功能：猴子第一天摘下若干桃子，当即吃了一半零一个，以后每天早上都吃前天剩下的一半零一个，到底10天
//         只剩1个桃子了，求第一天共摘了多少个桃子。
int main(void)
{
    int remain = 1;
    for (int i = 9; i > 0; i--)
    {
        remain = (remain + 1) * 2; //前一天桃子的数量是当天桃子数加1后的2倍。
    }
    printf("第1天共摘了%d个桃子\n", remain); //vscode运行程序时需将终端编码格式改成65001，否则出现乱码。
    return 0;
}