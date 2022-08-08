#include <stdio.h>

//函数传地址实现两数交换：
void swap(int* num1, int* num2);

int main(void)
{
    int num1 = 3;
    int num2 = 5;
    int* p1 = &num1;
    int* p2 = &num2;
    swap(p1, p2);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}

void swap(int* num1, int* num2)
{
    int temp = *num2;
    *num2 = *num1;
    *num1 = temp;
}

// //函数传地址实现两数交换（直接传递值无用）：

// void swap(int num1, int num2);

// int main(void)
// {
//     int num1 = 3;
//     int num2 = 5;
//     swap(num1, num2);
//     printf("num1 = %d, num2 = %d\n", num1, num2);
//     return 0;
// }

// void swap(int num1, int num2)
// {
//     int temp = num2;
//     num2 = num1;
//     num1 = temp;
// }