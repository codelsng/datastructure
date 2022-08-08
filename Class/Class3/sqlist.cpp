#include <stdio.h>
#define MAX 100

typedef struct node {
    int data[MAX];
    int length;
}sqlist;

void CreateList(sqlist &L, int arr[], int num);
void DisplayList(sqlist L);

int main(void)
{
    int arr[MAX] = {0};
    int num = 0;
    puts("Input argument for the list length:");
    scanf("%d", &num);
    puts("Input arguments for array");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    sqlist L;
    CreateList(L, arr, num);
    DisplayList(L);
    return 0;
}


void CreateList(sqlist &L, int arr[], int num) {
    int i = 0;
    for (i = 0; i < num; i++)
    {
        L.data[i] = arr[i];
    }
    L.length = i;
}
void DisplayList(sqlist L) {
    for (int i = 0; i < L.length; i++)
    {
        printf("data[%d] = %d\n", i, L.data[i]);
    }
}
