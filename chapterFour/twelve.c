/**********************************************
*File name:     eleven.c
*Description:   C程序设计(第五版)课后编程习题第11题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
#include <math.h>
//函数功能：有4个圆塔分别给出圆心坐标，半径和高，输入一点坐标，判断该点是否在塔内。
int main(void)
{
    float x, y;                                                                              //待输入的坐标x,y
    float x1 = 2, y1 = 2, x2 = -1, y2 = 2, x3 = -2, y3 = -2, x4 = 2, y4 = -2, r = 1; //四个圆塔的半径坐标,半径
    float d1, d2, d3, d4;
    int h=10; //圆塔高
    printf("please enter x,y:");
    scanf("%f,%f", &x, &y);
    //计算该点到圆心的距离
    d1 = pow((x - x1), 2) + pow((y - y1), 2);
    d2 = pow((x - x2), 2) + pow((y - y2), 2);
    d3 = pow((x - x3), 2) + pow((y - y3), 2);
    d4 = pow((x - x4), 2) + pow((y - y4), 2);
    //判断是否在塔外
    if (d1 > r && d2 > r && d3 > r && d4 > r)
    {
        h = 0;
    }
    printf("heigh=%d\n", h);
    return 0;
}
