/*************************************************************************
	> File Name: 3.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2020年05月30日 星期六 19时01分46秒
 ************************************************************************/

#include <stdio.h>

int fun(int m, int n)
{
    int flag1 = 0, flag2 = 0;
    printf("能被7整除的数有:");
    for(int i = m; i < n; i++) {
        if(i % 7 == 0) {
            printf("%d ", i);
            flag1++;
        }
    }
    printf("\n能被7整除的数共%d个\n", flag1);
    
    printf("能被11整除的数有:");
    for(int i = m; i < n; i++) {
        if(i % 11 == 0) {
            printf("%d ", i);
            flag2++;
        }
    }
    printf("\n能被11整除的数共%d个\n", flag2);
}


int main()
{
    int m,n;
    scanf("%d %d", &m, &n);
    fun(m,n);
}
