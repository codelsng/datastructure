//线性表操作：
#include <stdio.h>
//宏定义：MAXSIZE为100：
#define MAXSIZE 100

//自定义int类型为elem：
typedef int elem;

//定义结构体：
typedef struct
{
    elem data[MAXSIZE];
    int length;
}sqlist;


//操作结构体的函数声明：
void displist(sqlist L);
//引用类型形参：
void createlist(sqlist &L, int arr[], int num);

int main(void)
{
    int num = 0;
    int arr[MAXSIZE] = {0};
    scanf("%d", &num);
    for(int i = 0; i < num; ++i)
    {
        scanf("%d", &arr[i]);
    }

    //定义结构体变量L：
    sqlist L;
    createlist(L, arr, num);
    displist(L);
    return 0;
}

void createlist(sqlist &L, int arr[], int num)
{
    int k = 0;
    for(int i = 0; i < num; ++i)
    {
        L.data[k] = arr[i];
        k++;
    }
    L.length = k;
}

void displist(sqlist L)
{
    for(int i = 0; i < L.length; ++i)
    {
        printf("%d\t", L.data[i]);
    }
    putchar('\n');
} 
