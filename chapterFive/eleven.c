/**********************************************
*File name:     eleven.c
*Description:   C程序设计(第五版)课后编程习题第11题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
//函数功能：一个球从100米高度自由落体，每次落地后反弹回原高度的一半，再落下，再反弹，求第10次落地时共经过
//        多少米，第10次反弹多高。
int main(void)
{
    double s = 100, height = s / 2;
    for (int i = 1; i < 10; i++) //因为定义变量时已经将s赋值100，就是说第一次落下高度已经记录，所以循环从第2次开始。
    {
        s += height * 2; //因为在落下反弹到原来高度一半的时候，它再次落下的高度等于原先反弹高度，因为要乘2
        height /= 2;
    }
    printf("s=%f,height=%f\n", s, height);
    return 0;
}