/*************************************************************************
	> File Name: typedef.c
	> Author: 
	> Mail: 
	> Created Time: 2019年09月11日 星期三 15时58分14秒
 ************************************************************************/

#include<stdio.h>
#define SUM(x)  ((x) + (x))
#define EMPTY

#define X 3
#define Y X*2
#undef X
#define X 2

int main()
{
    //编译器是用空格代替原来的注释
    int /*……*/ i;
    char *s = "abcdrf    //jkklllj";
    //Is it a \
    valid comment?

    
    // in/*……*/t i;
    //注意/*……*/的形式的注释不能嵌套，因为/*总是与离他最近的*/匹配
    
    //逻辑连接符||两边的条件只要有一个为真，其结果为真
    //只要有一个为真，就不再进行后面的计算
    int i1 = 0, j = 0;
    if ((++i1 > 0) || (++j > 0)) {
        printf("%d %d\n", i1,j);  //i = 1; j = 0;
    }

    //保证位移量小于移位值的位数
    printf("%d\n",(0x01 << 5));

    char a[10] = "abcde";
    printf("SUM(x)\n");
    
    int z = Y;
    printf("%d\n",z);
}

