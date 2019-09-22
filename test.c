/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: 2019年09月10日 星期二 15时21分54秒
 ************************************************************************/

#include<stdio.h>

// 局部变量分配在栈上，全局变量分配在静态区
int a = 10;

int main()
{
    int b;
    int c = 10;
    static int d = 1;
    printf("&a = %x\n", &a);
    printf("&b = %x\n", &b);
    printf("&c = %x\n", &c);
    printf("&d = %x\n", &d);
}
//防止栈溢出，地址空间随机化 /proc/sys/kernel/randomize_va_space 配置在这个文件中
