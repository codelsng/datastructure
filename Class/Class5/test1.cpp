#include <stdio.h>
#include <malloc.h>

typedef struct node
{
    int data;
    struct node * next;
}slinknode;

void createlist(slinknode * &L, int arr[], int num);
void dislist(slinknode * L);

int main(void)
{
    int num = 0;
    int arr[100] = {0};
    scanf("%d", &num);
    for(int i = 0; i < num; ++i)
        scanf("%d", &arr[i]);
    
    //创建L为链表的头指针：
    slinknode *L;
    createlist(L, arr, num);
    dislist(L);
    return 0;
}


// void createlist(slinknode * &L, int arr[], int num)
// {
//     //
//     L = (slinknode *)malloc(sizeof(slinknode));
//     // printf("%p\n", L);
//     // printf("%p\n", (slinknode *)malloc(sizeof(slinknode)));
//     L -> next = NULL;
    
//     for(int i = 0; i < num; ++i)
//     {
//         slinknode * temp = (slinknode *)malloc(sizeof(slinknode));
//         temp -> data = arr[i];
//         temp -> next = L -> next;
//         L -> next = temp;
//     }
// }


//尾插入法：

void createlist(slinknode * &L, int arr[], int num)
{
    L = (slinknode *)malloc(sizeof(slinknode));
    // printf("%p\n", L);
    // printf("%p\n", (slinknode *)malloc(sizeof(slinknode)));
    slinknode * tc = L;
    for(int i = 0; i < num; ++i)
    {
        slinknode * temp = (slinknode *)malloc(sizeof(slinknode));
        temp -> data = arr[i];
        tc -> next = temp;
        tc = temp;
    }
}

void dislist(slinknode * L)
{
    slinknode *p = L -> next;
    while (p != NULL)
    {
        printf("%d ", p -> data);
        p = p -> next;
    }
}