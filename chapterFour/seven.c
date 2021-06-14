/**********************************************
*File name:     seven.c
*Description:   C程序设计(第五版)课后编程习题第7题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include<stdio.h>
//函数功能： y={-1 (x<0)
//              0 (x=0)
//              1 (x>0)
int main(void)
{
    int x,y=1;
    printf("please enter x:");
    scanf("%d",&x);
    if(x==0)
    {
        y=0;
    }
    if(x<0)
    {
        y=-1;
    }
    printf("y=%d\n",y);
    return 0;
}