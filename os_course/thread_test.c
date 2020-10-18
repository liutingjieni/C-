/*************************************************************************
	> File Name: thread_test.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2020年09月29日 星期二 08时11分24秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <errno.h>
#include <unistd.h>

#define PTHREAD_NUM 16

unsigned long sum = 0;

void *thread (void *arg)
{
    for (int i = 0; i < 10000; i++) {
        sum += 1; 
    }
}

int main()
{
    printf("before ... sum = %lu\n", sum);

    pthread_t pthread[PTHREAD_NUM];
    int ret;
    void *retval[PTHREAD_NUM];

    for (int i = 0; i < PTHREAD_NUM; i++) {
        ret = pthread_create(&pthread[i], NULL, thread, NULL);
        if (ret != 0) {
            perror("error");
            printf("create pthread %d failed.\n", i++);
        }
    }

    for (int i = 0; i < PTHREAD_NUM; i++) {
        pthread_join(pthread[i], &retval[i]);
    }

    printf("after...sum = %lu\n", sum);

    return 0;
}
