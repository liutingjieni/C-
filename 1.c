/*************************************************************************
	> File Name: 1.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2019年12月11日 星期三 22时10分57秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void why_it_run(void)
{
    printf("why run here?\n");
    exit(0);
}

void we_call(void)
{
    int *buff[2];
    buff[3] = (int *)why_it_run;
}

int main()
{
    we_call();
    return 0;
}
