/*************************************************************************
	> File Name: enum.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2020年05月19日 星期二 23时24分40秒
 ************************************************************************/

#include <stdio.h>

enum string{    
    x1,    
    x2,    
    x3=10,    
    x4,    
    x5,    
} x;

int main()
{
    double a = x1;
    printf("%f %d\n",a,  x1);
}
