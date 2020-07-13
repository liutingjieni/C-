/*************************************************************************
	> File Name: 2020_2.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2020年07月13日 星期一 01时14分18秒
 ************************************************************************/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])

{
    //printf("lalal");

    for (int i = 0; i < 2; i++)

    {

        pid_t pid = fork();

        printf("ppid = %d pid = %d i= %d\n", getppid(), getpid(), i);


    }

     return 0;


}
