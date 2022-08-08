#include <stdio.h>

typedef struct node
{
    int data;
    int data2;
}slinknode;

int main(void)
{
    slinknode a;
    a.data = 1;
    slinknode b;
    b.data = 2;
    printf("&a.data = %p\n", &a.data);
    printf("&b.data = %p\n", &b.data);
    return 0;
}
