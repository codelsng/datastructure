#include <stdio.h>
#include <iostream>
using namespace std;

#define MAX 100
typedef int SlData;
typedef struct node {
    SlData data;
    struct node * next;
}SL;

void CreateList(SL* &L, int num, int arr[]) {
    L = (SL*)malloc(sizeof(SL));
    for (int i = 0; i < num; i++)
    {
        SL * temp = (SL*)malloc(sizeof(SL));
        temp->data = arr[i];
        temp->next = L->next;
        L->next = temp;
    }

}

void DisplayList(SL* L) {
    SL* p = L->next;
    while (p != NULL)
    {
        cout << p->data;
        p = p->next;
    }
}

int main(void) 
{
    int num = 0;
    SlData arr[MAX] = {0};
    puts("请输入数组的长度：");
    cin >> num;
    puts("请输入数组元素：");
    for (int i = 0; i < num; i++)
        cin >> arr[i];
    SL * L;
    CreateList(L, num, arr);
    DisplayList(L);

    return 0;
}