/*************************************************************************
	> File Name: ps_test_z.c
	> Author: 
	> Mail: 
	> Created Time: 2019年09月18日 星期三 13时36分26秒
 ************************************************************************/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t pid;
    pid = fork();
    if (pid == 0) {
        printf("a\n");
    }

    else {
        while(1) {
        
        printf("bb\n");
        }
    }
}
