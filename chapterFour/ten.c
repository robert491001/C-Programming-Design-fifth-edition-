/**********************************************
*File name:     ten.c
*Description:   C程序设计(第五版)课后编程习题第10题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-6-4
**********************************************/
#include <stdio.h>
//根据利润的不同，结算各个区间内的奖金。
int main(void)
{
    //函数声明
    float fun(float profits);
    float fun1(float profits);
    float fun2(float profits);
    float fun3(float profits);
    float fun4(float profits);
    float fun5(float profits);

    float profits, award;
    int tem;
    printf("please enter profits:");
    scanf("%f", &profits);

    //用switch语句编写
    tem = profits / 100000;
    switch (tem)
    {
    case 0:
        award = fun(profits);
        break;
    case 1:
        award = fun1(profits);
        break;
    case 2:
    case 3:
        award = fun2(profits);
        break;
    case 4:
    case 5:
        award = fun3(profits);
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        award = fun4(profits);
        break;
    default:
        award = fun5(profits);
        break;
    }

    //用if语句编写
    // if (profits <= 100000)
    // {
    //     award = fun(profits);
    // }
    // else if (profits <= 200000)
    // {
    //     award = fun1(profits);
    // }
    // else if (profits <= 400000)
    // {
    //     award = fun2(profits);
    // }
    // else if (profits <= 600000)
    // {
    //     award = fun3(profits);
    // }
    // else if (profits <= 1000000)
    // {
    //     award = fun4(profits);
    // }
    // else
    // {
    //     award = fun5(profits);
    // }

    printf("award=%.2f\n", award);
    return 0;
}
float fun(float profits) //利润低于或等于100 000，可提成10%
{
    return profits * 0.1;
}
float fun1(float profits) //利润高于100 000，低于或等于200 000，低于100 000部分提成10%，高于100 000部分提成7.5%
{
    return fun(100000) + (profits - 100000) * 0.075;
}
float fun2(float profits) //利润高于200 000，低于或等于400 000，低于200 000部分按上述办法提成，高于200 000部分提成5%
{
    return fun1(200000) + (profits - 200000) * 0.05;
}
float fun3(float profits) //利润高于400 000，低于或等于600 000，低于400 000部分按上述办法提成，高于400 000部分提成3%
{
    return fun2(400000) + (profits - 400000) * 0.03;
}
float fun4(float profits) //利润高于600 000，低于或等于1 000 000，低于600 000部分按上述办法提成，高于600 000部分提成1.5%
{
    return fun3(600000) + (profits - 600000) * 0.015;
}
float fun5(float profits) //利润高于1 000 000，低于1 000 000部分按上述办法提成，高于1 000 000部分提成1%
{
    return fun4(600000) + (profits - 600000) * 0.01;
}