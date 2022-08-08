#include <iostream>

using namespace std;

int main(void)
{
    int num1 = 3;
    int num2 = 5;
    swap(num1, num2);
    cout << "num1 = %d, num2 = %d\n", num1, num2;
    return 0;
}

void swap(int &num1, int &num2)
{
    int temp = num2;
    num2 = num1;
    num1 = temp;
}