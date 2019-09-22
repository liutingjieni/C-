/*************************************************************************
	> File Name: memory_mean.c
	> Author: 
	> Mail: 
	> Created Time: 2019年09月10日 星期二 18时06分23秒
 ************************************************************************/

#include<stdio.h>

int b[100];
void fun(int *b)
{
    printf("%d\n", sizeof(b));
}
int main()
{
    int *p = NULL;
    printf("%d\n", sizeof(p));
    printf("%d\n", sizeof(*p));
    
    int a[100];
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(a[100]));
    printf("%d\n", sizeof(&a));
    printf("%d\n", sizeof(&a[0]));
    printf("%x\n", &a);
    printf("%x\n", &a+1);
    printf("%x\n", &a[0]+1);
    printf("%x\n", a+1);

    int c[3][4];
    printf("sizeof(c) = %d  ", sizeof(c));
    printf("sizeof(c[3]) = %d  ",sizeof(c[3]));
    printf("sizeof(&c) = %d   ", sizeof(&c));
    printf("sizeof(c[3][4]) = %d\n", sizeof(c[3][4]));
    printf("sizeof(&c[0]) = %d\n", sizeof(&c[0]));

    printf("&c = %x\n", &c);
    printf("&c+1 = %x\n", &c+1);
    printf("c+1 =%x\n", c+1);
    printf("c[0]+1 %x\n", c[0]+1);
    printf("&c[0][0]+1 = %x\n", &c[0][0]+1);
    
    fun(b);
}
