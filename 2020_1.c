#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tag_unimportant {
    char *t2;
    int t1;
} A;


void func(A *a)
{
    a->t1 = 0x567e5554;
    a->t2 = (char* )&(a->t1);
    *(a->t2) = 0x53;
    printf("%x\n", a->t1);
    strcpy(a->t2, "xiyoulinux");
    printf("%x\n", a->t1);
}

int main(int argc, char *argv[])
{
    A *a;
    a = (A *)malloc(sizeof(A));
    printf("%x %x\n", &(a->t2), &(a->t1));
    func(a);
    printf("%x %x\n", &(a->t2), &(a->t1));
    printf("%x\n", a->t1);
    printf("%s\n", a->t2);
    printf("%c\n", *((a->t2)+11));
    return 0;
}
