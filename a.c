/*************************************************************************
	> File Name: a.c
	> Author: 
	> Mail: 
	> Created Time: 2019年09月20日 星期五 08时25分59秒
 ************************************************************************/
#include "b.h"

extern int shared;

int main()
{
    int a = 100;
    swap(&a, &shared);
}
