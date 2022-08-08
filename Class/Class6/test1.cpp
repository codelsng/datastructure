#include <stdio.h>
#include <malloc.h>

typedef struct node
{
    int data;
    struct node * next;
}slinknode;

void createlist(slinknode *&L, int arr[], int num);
void dislist(slinknode *L);
int getlength(slinknode *L);

int main(void)
{
    int num = 0;
    int arr[100] = {0};
    printf("输入数组元素个数：\n");
    scanf("%d", &num);
    printf("输入数组元素：\n");
    for(int i = 0; i < num; ++i)
        scanf("%d", &arr[i]);
    
    slinknode *L;
    createlist(L, arr, num);
    dislist(L);
    printf("%d\n", getlength(L));
    return 0;
}

void createlist(slinknode *&L, int arr[], int num)
{
    L = (slinknode *)malloc(sizeof(slinknode));
    L->next = L;
    for(int i = 0; i < num; ++i)
    {
        slinknode * s = (slinknode *)malloc(sizeof(slinknode));
        s->data = arr[i];
        s->next = L->next;
        L->next = s;
    }
}

void dislist(slinknode *L)
{
    slinknode *p = L->next;
    while(p != L)
    {
        printf("%d", p->data);
        p = p->next;
    }
    putchar('\n');
}

int getlength(slinknode *L)
{
    int j = 0;
    slinknode * p = L->next;
    while(p != L)
    {
        j ++;
        p = p->next;
    }
    return j;
}