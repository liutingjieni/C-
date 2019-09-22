/*************************************************************************
	> File Name: big_little_endian.c
	> Author: 
	> Mail: 
	> Created Time: 2019年09月11日 星期三 13时44分55秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    //小端：0x01 00 00 00
    //大端：0x00 00 00 01
    //小端输出结果为1
    int i = 0x00000001;
    char *p = (char *)&i;
    printf("%x\n",*p);
    
    // 大小端
    union {
        int j;
        char a[2];
    }*pu,u;
    pu->a[0] = 0x39;
    pu->a[1] = 0x38;
    printf("%x\n",pu->j);

    //数组含义问题
    int a[5] = {1,2,3,4,5};
    int *ptr1 = (int *)(&a + 1);
    int *ptr2 = (int *)(a + 1);
    printf("%x %x", ptr1[-1], *ptr2);
    return 0;
}
