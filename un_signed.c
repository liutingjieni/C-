/*************************************************************************
	> File Name: un_signed.c
	> Author: 
	> Mail: 
	> Created Time: 2019年09月10日 星期二 18时32分00秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    //补码
    char a[1000];
    int i;
    for (i = 0; i < 1000; i++) {
        a[i] = -1-i;
    }
    printf("%d\n",strlen(a));
    
    // 有符号数与无符号数相加
    int m = -20;
    unsigned n =10;
    printf("%u\n", m+n);
    printf("%d\n", m+n);

    unsigned ui;
    for (i = 9; i > 0; i--) {
        printf("%u\n", i);
    }
    
    // 不要在很大的浮点数和很小的浮点数之间运算
    float f = 10000000000.00;
    double d = 0.00000000001;
    printf("%ld\n",f+d);
}
