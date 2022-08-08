//用指针输出值：
#include <stdio.h>

int main(void)
{
    int num = 9;
    int *p = &num;
    printf("*p = %d\n", *p);
    return 0;
}