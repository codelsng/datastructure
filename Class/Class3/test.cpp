#include <stdio.h>
#define MAX 100

typedef int SeData;
typedef struct node {
    SeData data[MAX];
    int length;
}SL;
void CreateList(SL& L, int arr[], int num) {
    int i = 0;
    for (i = 0; i < num; i++)
        L.data[i] = arr[i];
    L.length = i;
}
void DisplayList(SL L) {
    for (int i = 0; i < L.length; i++)
        printf("data[%d] = %d\n", i, L.data[i]);
}

int main(void)
{
    int num = 0;
    int arr[MAX] = {0};
    puts("请输入数组的长度:");
    scanf("%d", &num);
    puts("请输入数组的元素：");
    int i = 0;
    for (i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    SL L;
    CreateList(L, arr, num);
    DisplayList(L);
    return 0;
}