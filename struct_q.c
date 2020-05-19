/*************************************************************************
	> File Name: struct_q.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2020年03月17日 星期二 21时13分25秒
 ************************************************************************/

#include <stdio.h>

struct t{
    int a;
    double b;
    char c;
};

int main()
{
    struct t t;
    printf("%u\n", sizeof(t));
}
