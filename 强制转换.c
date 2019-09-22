/*************************************************************************
	> File Name: 强制转换.c
	> Author: 
	> Mail: 
	> Created Time: 2019年09月16日 星期一 09时26分31秒
 ************************************************************************/

#include<stdio.h>
typedef struct Test {
    int num;
    char *pnum;
    short sdata;
    char ch[2];
    short s_a[4];
}Test;

void fun(int *a)
{
    printf("%d\n",sizeof(a));
}

int main()
{

    Test *p;
    printf("%p\n",p);
    printf("%d\n",sizeof(Test));
    printf("%p\n",p+1);
   
    int a[10];
    fun(a);
}
