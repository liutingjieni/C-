/*************************************************************************
	> File Name: memset_test.c
	> Author: 
	> Mail: 
	> Created Time: 2019年12月04日 星期三 14时18分47秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    memset(s, 'c', 20);
    printf("%s\n", s);

    char s2[20];
    bzero(s2, 20);
    printf("%s\n", s2);
}
