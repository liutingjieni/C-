/*************************************************************************
	> File Name: b.c
	> Author: 
	> Mail: 
	> Created Time: 2019年09月20日 星期五 08时40分31秒
 ************************************************************************/

void swap(int *a, int *b)
{
    *a ^= *b ^= *a ^= *b; 
}
