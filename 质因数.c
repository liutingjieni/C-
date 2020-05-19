/*************************************************************************
	> File Name: 质因数.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2020年05月19日 星期二 23时51分17秒
 ************************************************************************/

#include <stdio.h>

    void prim(int m, int n)
    {
             if (m >= n)
        {
                     while (m % n) n++;
                     m /= n;
                     prim(m, n);
                     printf("%d ", n);        
        }
         
    }
int main()
{
    prim(24, 2);
}
