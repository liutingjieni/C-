/*************************************************************************
	> File Name: cs_2_大小端.c
	> Author: 
	> Mail: 
	> Created Time: 2019年09月07日 星期六 12时31分35秒
 ************************************************************************/

#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    for (i = 0; i< len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer) &x, sizeof(float));
}
int main()
{
    int a = 0x12345678;
    show_int(a);
    float b = 0x12345678;
    show_float(b);
}
