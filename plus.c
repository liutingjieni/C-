/*************************************************************************
	> File Name: plus.c
	> Author: 
	> Mail: 
	> Created Time: 2019年09月11日 星期三 17时31分26秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i = 0, j, k;
    
    
    i = 3;
    k = (i++) + (i++) + (i++);
    printf("%d\n",k);  //k =12;

    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    printf("%d\n", i);
   
    int x;
    i = 3;
    x = (++i, i++, i+10);
    printf("%d\n", x);

    //for循环的内部机制！！！！！！！！
    for(i = 0, printf("First = %d ", i);
        i <10;
        i++, printf("Third = %d", i))
    {
        printf("Fourth = %d\n",i);
    }

    //q = a / b; r = a % b;
    //q * b + r == a, 这是定义余数的关系
    //如果我们改变a的正负号，q的符号也随之改变，但q的绝对值不变
    printf("%d\n", 3/(-2));
    printf("%d\n", 3%(-2)); 
}
