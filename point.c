/*************************************************************************
	> File Name: point.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2020年10月13日 星期二 19时05分17秒
 ************************************************************************/

#include <stdio.h>

void fun(char *ch)
{
    printf("%c\n", *ch);
}

int main()
{
    char ch = 'b';
    fun(&ch);
}
