/**********************************************
*File name:    two.c
*Description:   C程序设计(第五版)课后编程习题第7题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include<stdio.h>
//函数功能：输入圆半径和圆柱高，求圆周长，圆面积，圆球表面积，圆球体积，圆柱体积。
int main(void)
{
    float r,h,l,s,ss,sv,cv;//r半径，h圆柱高，l圆周长，s圆面积，ss圆球表面积，sv圆球体积，cv圆柱体积
    float pi=3.1415926;
    printf("Please enter the radius of the circle r and the height of the cylinder h:\n");
    scanf("%f,%f",&r,&h);
    l=2*pi*r; //计算圆周长
    s=pi*r*r; //计算圆面积
    ss=4*pi*r*r; //计算圆球表面积
    sv=4/3*pi*r*r*r; //计算圆球体积
    cv=pi*r*r*h;     //计算圆柱体积
    printf("Circumference is %.2f\n",l);
    printf("Circular area is %.2f\n",s);
    printf("The surface area of the sphere is %.2f\n",ss);
    printf("Sphere volume is %.2f\n",sv);
    printf("The volume of the cylinder is %.2f",cv);
    return 0;
}