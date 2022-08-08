//两个变量交换值不用函数：
#include <stdio.h>

int main(void)
{
    int num1 = 3;
    int num2 = 5;
    int swap = num1;
    num1 = num2;
    num2 = swap;
    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}