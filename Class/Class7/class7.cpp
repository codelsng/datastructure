//test_4_19_2022.cpp
#include <stdio.h>
#define MAX 100

int stk[MAX] = {0};
int top = -1;

int main(void)
{
    //数组方法：
    // int num = 0;
    // int arr[MAX] = {0};
    // printf("输入数组元素个数：\n");
    // scanf("%d", &num);
    // printf("输入数组元素：\n");
    // for(int i = 0; i < num; i++)
    //     scanf("%d", &arr[i]);
    // for(int i = num - 1; i > -1; i--)
    //     printf("arr[%d] = %d\n", i, arr[i]);\

    //栈方法：
    int num = 0;
    printf("输入数组元素个数：\n");
    scanf("%d", &num);
    printf("输入数组元素：\n");
    for(int i = 0; i < num; i++)
    // {
    //     int x = 0;
    //     scanf("%d", &x);
    //     //入栈：
    //     stk[++top] = x;
    // }

    //error
    {
        top++;
        scanf("%d", &stk[top]);
        
    }

    ////出栈：
    // while (top != -1)
    // {
    //     printf("stk[%d] = %d\n", top, stk[top]);
    //     top--;
    // }

    //出栈2：
    for(;top != -1;top--)
        printf("stk[%d] = %d\n", top, stk[top]);

    return 0;
}