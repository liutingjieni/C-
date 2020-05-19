/*************************************************************************
	> File Name: temp.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2019年12月30日 星期一 10时41分14秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char **p;
    p = malloc(sizeof(char *));
    *p = (char *)malloc(sizeof(char) *256);
}
