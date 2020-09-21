/*************************************************************************
	> File Name: realloc.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2020年09月21日 星期一 21时21分31秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s;
    s = (char *)malloc(sizeof(char) * 20);
    s = (char *)realloc(s, sizeof(char) * 30);
}

