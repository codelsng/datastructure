#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void dislist(slink * list);
void createlist(slink * &list, int arr[], int num);

typedef struct node
{
    int data;
    struct node * next;
}slink;

int main(void)
{
    int num = 0;
    int arr[MAX] = {0};
    printf("请输入数组元素个数。\n");
    scanf("%d", &num);
    printf("请输入数组元素。\n");
    for (int i = 0; i < num; ++i)
        scanf("%d", &arr[i]);
    slink * list;
    createlist(list, arr, num);
    dislist(list);

    return 0;
}

void createlist(slink * &list, int arr[], int num)
{
    //给结构体指针list分配空间：
    list = (slink *)malloc(sizeof(slink));
    //递归定义，
    list->next = list;
    for (int i = 0; i < num; i++)
    {
        slink * list_temp = (slink *)malloc(sizeof(slink));
        list_temp->data = arr[i];
        list_temp->next = list->next;
        list->next = list_temp;
    }
}

void dislist(slink * list)
{

}