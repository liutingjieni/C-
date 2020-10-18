/*************************************************************************
	> File Name: tplus.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2020年10月18日 星期日 21时57分23秒
 ************************************************************************/

#include <stdio.h>
#include <pthread.h>
int t = 0;
void *fun(void* arg)
{
    printf("%d", t++);
}
void *fun1(void* arg)
{
    printf("%d", ++t);
}

int main()
{
    pthread_t tid, tid1;
    pthread_create(&tid, NULL, fun, NULL);
    pthread_create(&tid1, NULL, fun1, NULL);
}
