/*************************************************************************
	> File Name: 5.c
	> Author:jieni 
	> Mail: 
	> Created Time: 2020年05月30日 星期六 19时34分11秒
 ************************************************************************/

#include <stdio.h>

int fun1(int *arr, int n)
{
    int sort[n];
    int flag2 = 0;
    for(int i = 0; i < n; i++) {
        int flag = 0;
        for(int j = 2; j < arr[i]; j++) {
            if(arr[i] % j != 0) {
                flag++;
            }
            else {
                break;
            }
        }
        if (flag == arr[i] - 2) {
            sort[flag2++] = arr[i];
        }

    }

    
    if (flag2 == 0) {
        printf("Not found\n");
    }
    else {
        for (int i = 0; i < flag2; i++) {
            for (int j = 0; j < flag2 - i - 1; j++) {
                if(sort[j] > sort[j + 1]) {
                    int t = sort[j];
                    sort[j] = sort[j + 1];
                    sort[j + 1] = t;
                }
            }
        }

        for(int i = 0; i < flag2; i++) {
            printf("%d ", sort[i]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    fun1(arr, n);
}
