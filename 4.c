/*************************************************************************
	> File Name: 4.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2020年05月30日 星期六 19时13分09秒
 ************************************************************************/

#include <stdio.h>

typedef struct student {
    int num;
    char name[10];
    int shuxu;
    int english;
}STU;

int fun1(STU *stu, int m)
{
    int flag1 = 0, flag2 = 0;
    for (int i = 0; i < m ; i++) {
        if (stu[i].shuxu < 60) {
            flag1++;
        }
        if (stu[i].english < 60) {
            flag2++;
        }
    }
    printf("高数不及格人数:%d\n",flag1);
    printf("英语不及格人数:%d\n",flag2);
}

int fun2(STU *stu, int m)
{
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum +=stu[i].shuxu;
    }
    int arr = sum / m;
    for (int i = 0; i < m; i++) {
        if (stu[i].shuxu > arr) {
            printf("%d %s %d %d \n", stu[i].num, stu[i].name, stu[i].shuxu,stu[i].english);
        }
    }
}

int main()
{
    int m;
    scanf("%d", &m);
    STU stu[m];
    for(int i = 0; i < m; i++) {
        scanf("%d %s %d %d",&stu[i].num, stu[i].name, &stu[i].shuxu, &stu[i].english);
    }
    fun1(stu, m);
    fun2(stu, m);
}
