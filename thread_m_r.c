/*************************************************************************
	> File Name: thread_m_r.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2020年07月24日 星期五 10时04分00秒
 ************************************************************************/

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
int j = 0;

void fun()
{
    for(int i = 0; i < 50000; i++) {
        ++j;
    }
}

void *thread(void *arg)
{
    fun();
}

int main()
{
    pthread_t tid, tid1;
    pthread_create(&tid, NULL, thread, NULL);
    fun();
    pthread_join(tid, NULL);
    printf(" %d\n", j);
}
