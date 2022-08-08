#include <iostream>
#define MAX 100

using namespace std;

typedef struct
{
    int data[MAX];
    int length;
}sqlist;

void createlist(sqlist &L, int arr[], int num);
void displist(sqlist L);
void swap_num(int &num1, int &num2);
void swap_list(sqlist &L);
void delxy(sqlist &L, int i, int k);

int main(void)
{
    int num = 0;
    int arr[MAX] = {0};
    scanf("%d", &num);
    for(int i = 0; i < num; ++i)
        scanf("%d", &arr[i]);

    sqlist L;
    createlist(L, arr, num);
    displist(L);
    putchar('\n');

    // swap_list(L);
    // displist(L);
    int x = 0;
    int y = 0;
    scanf("%d%d", &x, &y);
    delxy(L, x, y);
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
        printf("%d ", L.data[i]);

    putchar('\n');
}

void swap_num(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void swap_list(sqlist &L)
{
    int maxi = 0;
    int mini = 0;
    for(int i = 0; i < L.length; ++i)
    {
        if(L.data[i] > L.data[maxi])
            maxi = i;
        else if(L.data[i] < L.data[mini])
            mini = i;
    }
    swap_num(L.data[maxi], L.data[mini]);
}

void delxy(sqlist &L, int i, int k)
{
    for(int j = i + k - 1; j < L.length; ++j)
        L.data[j - k] =  L.data[j];
    L.length = L.length - k;
}