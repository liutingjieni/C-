/*************************************************************************
	> File Name: test_10.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2020年09月26日 星期六 22时45分24秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int i, to, sum = 0;
    FILE *fd;
    clock_t start, end;
    start = clock();

    to = atoi(argv[1]);

    for (i = 1; i <= to; i++) {
        sum = sum + i;
        //fprintf(fd, "%d", sum);
        //printf("%d\n", sum);
    }

    end = clock();
    double time = (double)(end - start)/(double)CLOCKS_PER_SEC;
    printf("%lf\n", time);
}

