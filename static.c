/*************************************************************************
	> File Name: static.c
	> Author: 
	> Mail: 
	> Created Time: 2019年09月10日 星期二 13时08分33秒
 ************************************************************************/

#include<stdio.h>

//静态全局变量：作用域仅限在文件中，其他文件即使用extern 声明也没法使用他
static int j;

int fun1(void) 
{
    static int i = 0;
    i++;
    return i;
}

void fun2(void)
{
    j++;
}

int main()
{
    int i;
    for (int k = 0; k < 10; k++) {
        i = fun1();
        fun2();
    }
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    return 0;
}
