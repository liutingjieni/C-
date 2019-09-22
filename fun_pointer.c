/*************************************************************************
	> File Name: fun_pointer.c
	> Author: 
	> Mail: 
	> Created Time: 2019年09月16日 星期一 12时43分15秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

void fun1(char *p)
{
    printf("%s\n", p);
}

void fun2(char *p)
{
    printf("%s\n", p);
}

void fun3(char *p)
{
    printf("%s\n", p);
}

int main()
{
    void (*pf[3])(char *p);
    pf[0] = fun1;
    pf[1] = &fun2;
    pf[2] = &fun3;

    pf[0]("fun1");
    pf[1]("fun2");
    pf[2]("fun3");

    return 0;
}


