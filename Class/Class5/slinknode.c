#include <stdio.h>
#define MAX 100
typedef struct node {
    int data[MAX];
    struct node * next;
}slinknode;

void CreateList(slinknode *L, int num, int arr[]);
void DisplayList(const slinknode *L);
int main(void)
{
    int arr[MAX] = {0};
    int num = 0;
    puts("Input length for the array:");
    scanf("%d", &num);
    puts("Enter arguments for the array:");
    
    for (int i = 0; i < num; i++)
        scanf("%d", &arr[i]);

    slinknode L;
    CreateList(&L, num, arr);
    free(&L);
    return 0;
}


void CreateList(slinknode *L, int num, int arr[]) {
    L = (slinknode *)malloc(slinknode);
    L->next = NULL;
    for (int i = 0; i < num; i++)
    {
        slinknode * temp = (slinknode *)malloc(slinknode);
        temp->data[i] = arr[i];
        temp->next = L->next;
        L->next = temp;
    }
}


void DisplayList(const slinknode *L) {
    slinknode *p = L->next;
    
    while (NULL != p)
    {
       printf("%d", p->data);
       p = p->next;
    }
}
